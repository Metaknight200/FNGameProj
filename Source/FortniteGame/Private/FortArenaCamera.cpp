#include "FortArenaCamera.h"
#include "FortSpectatorCameraComponent.h"

AFortArenaCamera::AFortArenaCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortSpectatorCameraComponent>(TEXT("CameraComponent"))) {
    this->bEnabled = true;
    this->CameraComponentType = UFortSpectatorCameraComponent::StaticClass();
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}


