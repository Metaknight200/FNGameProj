#include "FortItemPreviewOnPawnActor.h"
#include "Camera/CameraComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"

AFortItemPreviewOnPawnActor::AFortItemPreviewOnPawnActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZoomedInBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInBodyCameraComponent"));
    this->ZoomedOutTallBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutTallBodyCameraComponent"));
    this->ZoomedInTallBodyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInTallBodyCameraComponent"));
    this->ZoomedOutBackpackCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutBackpackCameraComponent"));
    this->ZoomedInBackpackCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInBackpackCameraComponent"));
    this->ZoomedOutSkydiveCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutSkydiveCameraComponent"));
    this->ZoomedInSkydiveCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInSkydiveCameraComponent"));
    this->ZoomedOutEmoteCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoteCameraComponent"));
    this->ZoomedInEmoteCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoteCameraComponent"));
    this->ZoomedOutEmoteHighCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoteHighCameraComponent"));
    this->ZoomedInEmoteHighCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoteHighCameraComponent"));
    this->ZoomedOutEmoticonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutEmoticonCameraComponent"));
    this->ZoomedInEmoticonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInEmoticonCameraComponent"));
    this->ZoomedOutPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutPickaxeCameraComponent"));
    this->ZoomedInPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInPickaxeCameraComponent"));
    this->ZoomedOutDualPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutDualPickaxeCameraComponent"));
    this->ZoomedInDualPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInDualPickaxeCameraComponent"));
    this->ZoomedOutDoubleWristPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutDoubleWristPickaxeCameraComponent"));
    this->ZoomedInDoubleWristPickaxeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInDoubleWristPickaxeCameraComponent"));
    this->ZoomedOutPersonalGliderCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutPersonalGliderCameraComponent"));
    this->ZoomedInPersonalGliderCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInPersonalGliderCameraComponent"));
    this->ZoomedOutCharacterCustomizerCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutCharacterCustomizerCameraComponent"));
    this->ZoomedInCharacterCustomizerCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInCharacterCustomizerCameraComponent"));
    this->HeroPawnComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("HeroPawnComponent"));
    const FProperty* p_UserRotationComponent_Parent = GetClass()->FindPropertyByName("UserRotationComponent");
    this->EquippedWeapon = NULL;
    this->EquippedParachute = NULL;
    this->ContrailGlideVerticalVelocity = -50.00f;
    this->ContrailDiveVerticalVelocity = -500.00f;
    this->EmotePlayDelay = 0.50f;
    this->EmoteFXDuration = 0.50f;
    this->FXSystemComponent = NULL;
    this->HeroPawnComponent->SetupAttachment(*p_UserRotationComponent_Parent->ContainerPtrToValuePtr<USceneComponent*>(this));
    this->ZoomedInBackpackCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInBodyCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInCharacterCustomizerCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInDoubleWristPickaxeCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInDualPickaxeCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInEmoteCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInEmoteHighCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInEmoticonCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInPersonalGliderCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInPickaxeCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInSkydiveCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedInTallBodyCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutBackpackCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutCharacterCustomizerCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutDoubleWristPickaxeCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutDualPickaxeCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutEmoteCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutEmoteHighCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutEmoticonCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutPersonalGliderCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutPickaxeCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutSkydiveCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutTallBodyCameraComponent->SetupAttachment(RootComponent);
}

void AFortItemPreviewOnPawnActor::OnMontageStopped(UAnimMontage* Montage, bool bInterrupted) {
}

void AFortItemPreviewOnPawnActor::HandlePawnCustomizationComplete(AFortPlayerPawn* Pawn) {
}

FVector AFortItemPreviewOnPawnActor::GetPawnLocation() const {
    return FVector{};
}


