#include "KairosSceneManagerActor.h"
#include "Components/AudioComponent.h"

AKairosSceneManagerActor::AKairosSceneManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SnippetAudioComponent"));
    this->SnippetAudioComponent = (UAudioComponent*)RootComponent;
    this->ActiveGroupWidget = NULL;
    this->bIsSnippetPaused = false;
}

void AKairosSceneManagerActor::StopAR() {
}

void AKairosSceneManagerActor::PauseOrResumeSnippet(const FString& PlayerID, bool bShouldPase) {
}


FKairosSceneInfo AKairosSceneManagerActor::GetSceneInfo() {
    return FKairosSceneInfo{};
}

void AKairosSceneManagerActor::BeginEmotePlaybackForPlayer(const FString& PlayerID, const FString& EmoteId) {
}


