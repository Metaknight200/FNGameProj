#include "BuildingWall.h"
#include "BuildingEditModeSupport_Wall.h"
#include "Net/UnrealNetwork.h"

ABuildingWall::ABuildingWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRotateInPlaceGame = true;
    this->bIsNavigationModifier = true;
    this->bRotateInPlaceEditor = false;
    this->BuildingType = EFortBuildingType::Wall;
    this->bRegisterWithStructuralGrid = true;
    this->EditModeSupportClass = UBuildingEditModeSupport_Wall::StaticClass();
    const FProperty* p_BuildingAttachmentSlot = GetClass()->FindPropertyByName("BuildingAttachmentSlot");
    (*p_BuildingAttachmentSlot->ContainerPtrToValuePtr<TEnumAsByte<EBuildingAttachmentSlot>>(this)) = SLOT_Wall;
    this->SlidingTranslation = 0.00f;
    this->SlidingOpenTime = 0.40f;
    this->DoorOpeningSound = NULL;
    this->DoorSlammedOpenSound = NULL;
    this->DoorClosingSound = NULL;
    this->DoorAnimatingMaterial = NULL;
    this->DoorMesh = NULL;
    this->DoubleDoorMesh = NULL;
    this->DoorComponent = NULL;
    this->SlidingDoorComponent = NULL;
    this->DoubleDoorComponent = NULL;
    this->DoorBoxComponent = NULL;
    this->DoorSmartLinkComp = NULL;
    this->DoorBlueprintMeshComp = NULL;
    this->SlidingDoorBlueprintMeshComp = NULL;
    this->DoubleDoorBlueprintMeshComp = NULL;
    this->DoorDesiredXLocation = 0.00f;
    this->SlidingDoorDesiredXLocation = 0.00f;
    this->AreaWidthOverride = 0.00f;
    this->AreaShapeType = EBuildingWallArea::Regular;
    this->DoorOpenStyle = EDoorOpenStyle::Open;
    this->bSwingingDoor = false;
    this->bSlidingDoor = false;
    this->bAutomaticSlidingDoor = false;
    this->bDoubleDoor = false;
    this->bCreateDoorLink = true;
    this->bDoorOpen = false;
    this->bLocalDoorOpen = false;
    this->bDoorCollisionDisabled = false;
    this->bLocalDoorCollisionDisabled = false;
    this->bOverrideAreaWidth = false;
    this->bCreateClimbLink = true;
    this->bProhibitPassOverLowEndOfTriangleWall = false;
}

void ABuildingWall::VerifyDoorOpenMatchesServer() {
}

void ABuildingWall::VerifyDoorCollisionMatchesServer() {
}

void ABuildingWall::OnRep_bDoorOpen() {
}

void ABuildingWall::OnRep_bDoorCollisionDisabled() {
}

void ABuildingWall::OnNearDoorTriggerUnTouched(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuildingWall::OnNearDoorTriggerTouched(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ABuildingWall::IsDoorOpen() const {
    return false;
}

bool ABuildingWall::IsDoorComponent(const UStaticMeshComponent* MeshComponent) const {
    return false;
}

void ABuildingWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingWall, DoorMesh);
    DOREPLIFETIME(ABuildingWall, DoubleDoorMesh);
    DOREPLIFETIME(ABuildingWall, DoorDesiredRotOffset);
    DOREPLIFETIME(ABuildingWall, DoorDesiredXLocation);
    DOREPLIFETIME(ABuildingWall, SlidingDoorDesiredXLocation);
    DOREPLIFETIME(ABuildingWall, DoorOpenStyle);
    DOREPLIFETIME(ABuildingWall, bDoorOpen);
    DOREPLIFETIME(ABuildingWall, bDoorCollisionDisabled);
}


