#include "AthenaWrapPreviewActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

AAthenaWrapPreviewActor::AAthenaWrapPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZoomedInWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInWeaponCameraComponent"));
    this->ZoomedOutVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutVehicleCameraComponent"));
    this->ZoomedInVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInVehicleCameraComponent"));
    this->ZoomedOutCampaignVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutCampaignVehicleCameraComponent"));
    this->ZoomedInCampaignVehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInCampaignVehicleCameraComponent"));
    this->ZoomedOutLargeWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutLargeWeaponCameraComponent"));
    this->ZoomedInLargeWeaponCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInLargeWeaponCameraComponent"));
    this->PreviewSpawnPointComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PreviewSpawnPointComponent"));
    const FProperty* p_UserRotationComponent_Parent = GetClass()->FindPropertyByName("UserRotationComponent");
    this->ItemWrapDef = NULL;
    this->PreviewSpawnPointComponent->SetupAttachment(*p_UserRotationComponent_Parent->ContainerPtrToValuePtr<USceneComponent*>(this));
    this->ZoomedInCampaignVehicleCameraComponent->SetupAttachment(CameraRotationRootComponent);
    this->ZoomedInLargeWeaponCameraComponent->SetupAttachment(CameraRotationRootComponent);
    this->ZoomedInVehicleCameraComponent->SetupAttachment(CameraRotationRootComponent);
    this->ZoomedInWeaponCameraComponent->SetupAttachment(CameraRotationRootComponent);
    this->ZoomedOutCampaignVehicleCameraComponent->SetupAttachment(CameraRotationRootComponent);
    this->ZoomedOutLargeWeaponCameraComponent->SetupAttachment(CameraRotationRootComponent);
    this->ZoomedOutVehicleCameraComponent->SetupAttachment(CameraRotationRootComponent);
}

void AAthenaWrapPreviewActor::ShowNextPreviewMesh() {
}

bool AAthenaWrapPreviewActor::IsShowingVehicle() const {
    return false;
}

EWrapPreviewCamera AAthenaWrapPreviewActor::GetActiveCamera() const {
    return EWrapPreviewCamera::Weapon;
}


