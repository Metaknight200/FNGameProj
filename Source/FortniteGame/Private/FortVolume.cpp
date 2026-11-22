#include "FortVolume.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortVolume::AFortVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
    this->BlockingCubeFaceOne = NULL;
    this->BlockingCubeFaceTwo = NULL;
    this->BlockingCubeFaceThree = NULL;
    this->BlockingCubeFaceFour = NULL;
    this->ObjectTrackingComponent = NULL;
    this->DevicesDataTrackingComponent = NULL;
    this->OverridePlayset = NULL;
    this->bNeverAllowSaving = false;
    this->bShouldTrackObjects = false;
    this->bShowPublishWatermark = false;
    this->bDestroyingActors = false;
    this->bForceBoundsToBlock = false;
    this->CurrentPlayset = NULL;
    this->bAdjustNavInvokerSizeToVolume = false;
    this->bCreateNavOctreeInclusionBound = false;
    this->VolumeState = ESpatialLoadingState::Uninitialized;
    this->TaskQueue = NULL;
    this->AIGroupEncounterID = 0;
    this->MaxActiveAI = 21;
    this->NavInvokerClass = NULL;
    this->NavigationInvokerBox = NULL;
    this->BoundsShape = EVolumeShape::Box;
    this->BoundsCollisionSetting = ECollisionEnabled::NoCollision;
    this->bUserGeneratedContentRestricted = false;
    this->IslandResourceManagerComponent = NULL;
    this->PlayerSaveComponent = NULL;
    this->FortVolumePersistenceOptions = NULL;
}

void AFortVolume::SetBlockingVolumeCollision(const TEnumAsByte<ECollisionEnabled::Type> CollisionSetting) {
}

void AFortVolume::ServerClearVolume_Implementation() {
}
bool AFortVolume::ServerClearVolume_Validate() {
    return true;
}

void AFortVolume::RemoveAthenaPawnWhenDied(AFortPlayerPawnAthena* FortPlayerPawnAthena) {
}

void AFortVolume::RemoveActorWhenEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AFortVolume::RemoveActorWhenDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortVolume::RemoveActorFromEndOverlap(AActor* MyActor, AActor* ActorToRemove) {
}

void AFortVolume::OnRep_VolumeState() {
}

void AFortVolume::OnRep_UserGeneratedContentRestrictions() {
}

void AFortVolume::OnRep_ObjectTrackingComponent() {
}

void AFortVolume::OnRep_CurrentPlayset() {
}

void AFortVolume::OnRep_bShowPublishWatermark() {
}

void AFortVolume::OnRep_BoundsCollisionSetting() {
}

bool AFortVolume::IsReady() const {
    return false;
}

bool AFortVolume::IsReadOnly() const {
    return false;
}

bool AFortVolume::IsPlayerAllowedInVolume(AFortPlayerController* NewUser) {
    return false;
}

bool AFortVolume::HasVolumeBoundsBlocked() const {
    return false;
}

bool AFortVolume::GetUserGeneratedContentRestricted() const {
    return bUserGeneratedContentRestricted;
}

UStaticMeshComponent* AFortVolume::GetStaticMesh() const {
    return NULL;
}

UFortVolumeObjectTrackingComponent* AFortVolume::GetObjectTrackingComponent() const {
    return ObjectTrackingComponent;
}

int32 AFortVolume::GetNumPlayersInVolume() const {
    return 0;
}

AFortMinigame* AFortVolume::GetMinigame() const {
    return NULL;
}

EFortVolumeType AFortVolume::GetFortVolumeType() const {
    return EFortVolumeType::None;
}

UFortVolumePersistenceOptions* AFortVolume::GetFortVolumePersistenceOptions() const {
    return FortVolumePersistenceOptions;
}

UFortPlaysetItemDefinition* AFortVolume::GetCurrentPlayset() const {
    return NULL;
}

TArray<AActor*> AFortVolume::GetActorsWithinVolumeByClass(TSubclassOf<AActor> ActorClass) const {
    return TArray<AActor*>();
}

FString AFortVolume::GetAccountIdOwnerOfIsland() const {
    return TEXT("");
}

void AFortVolume::DestroyVolume() {
}

void AFortVolume::AddSelfToVolumeManager() {
}

void AFortVolume::AddOrRemovePawnAfterVehicleChange(AFortPlayerPawn* FortPawn, AActor* NewVehicle, AActor* OldVehicle) {
}

void AFortVolume::AddActorFromBeginOverlap(AActor* MyActor, AActor* ActorToAdd) {
}

void AFortVolume::AddActor(AActor* ActorToAdd) {
}

void AFortVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortVolume, ObjectTrackingComponent);
    DOREPLIFETIME(AFortVolume, bNeverAllowSaving);
    DOREPLIFETIME(AFortVolume, bShowPublishWatermark);
    DOREPLIFETIME(AFortVolume, CurrentPlayset);
    DOREPLIFETIME(AFortVolume, VolumeState);
    DOREPLIFETIME(AFortVolume, BoundsCollisionSetting);
    DOREPLIFETIME(AFortVolume, bUserGeneratedContentRestricted);
    DOREPLIFETIME(AFortVolume, IslandResourceManagerComponent);
    DOREPLIFETIME(AFortVolume, FortVolumePersistenceOptions);
}


