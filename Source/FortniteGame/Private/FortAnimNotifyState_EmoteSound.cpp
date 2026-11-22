#include "FortAnimNotifyState_EmoteSound.h"
#include "Components/AudioComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

UFortAnimNotifyState_EmoteSound::UFortAnimNotifyState_EmoteSound() {
    this->EmoteSound1P = NULL;
    this->EmoteSound3P = NULL;
    this->bPrimarySound = true;
    this->FadeoutTime = 0.50f;
    this->CopyrightedAudio = false;
}

void UFortAnimNotifyState_EmoteSound::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) {
    Super::NotifyBegin(MeshComp, Animation, TotalDuration);
    if (!MeshComp) return;
    UWorld* World = MeshComp->GetWorld();
    if (!World || World->GetNetMode() == NM_DedicatedServer) return;

    StopSound(MeshComp, false);
    for (auto It = ActiveSounds.CreateIterator(); It; ++It) {
        if (!It.Key().IsValid()) {
            if (UAudioComponent* Audio = It.Value().Get()) Audio->Stop();
            It.RemoveCurrent();
        } else if (!It.Value().IsValid()) {
            It.RemoveCurrent();
        }
    }

    const APawn* Pawn = Cast<APawn>(MeshComp->GetOwner());
    const APlayerController* Player = Pawn ? Cast<APlayerController>(Pawn->GetController()) : nullptr;
    const bool bFirstPerson = Player && Player->IsLocalPlayerController();
    USoundBase* Sound = bFirstPerson ? EmoteSound1P : EmoteSound3P;
    if (!Sound) Sound = bFirstPerson ? EmoteSound3P : EmoteSound1P;
    if (!Sound) return;

    UAudioComponent* Audio = nullptr;
    if (World->WorldType == EWorldType::EditorPreview) {
        // Preview actors have no player controller; bypass distance attenuation.
        Audio = UGameplayStatics::SpawnSound2D(World, Sound, 1.f, 1.f);
    } else {
        const FName AttachSocket = MeshComp->DoesSocketExist(TEXT("pelvis")) ? FName(TEXT("pelvis")) : NAME_None;
        Audio = UGameplayStatics::SpawnSoundAttached(Sound, MeshComp, AttachSocket, FVector::ZeroVector,
            EAttachLocation::SnapToTarget, true, 1.f, 1.f);
    }
    if (Audio) ActiveSounds.Add(MeshComp, Audio);
}

void UFortAnimNotifyState_EmoteSound::StopSound(USkeletalMeshComponent* MeshComp, bool bFadeOut) {
    TWeakObjectPtr<UAudioComponent> Sound;
    if (!ActiveSounds.RemoveAndCopyValue(MeshComp, Sound)) return;
    if (UAudioComponent* Audio = Sound.Get()) {
        if (bFadeOut && FadeoutTime > 0.f) Audio->FadeOut(FadeoutTime, 0.f);
        else Audio->Stop();
    }
}

void UFortAnimNotifyState_EmoteSound::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
    StopSound(MeshComp, true);
    Super::NotifyEnd(MeshComp, Animation);
}

