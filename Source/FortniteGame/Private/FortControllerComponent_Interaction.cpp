#include "FortControllerComponent_Interaction.h"
#include "FortInteractContextInfo.h"

UFortControllerComponent_Interaction::UFortControllerComponent_Interaction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClearActorPendingNonInteractionTime = 0.50f;
    this->LongInteractAudioComponent = NULL;
    this->PossibleInteractContextInfo = CreateDefaultSubobject<UFortInteractContextInfo>(TEXT("PossibleInteractContextInfo"));
    this->InteractResponse = NULL;
    this->InteractActor = NULL;
    this->bInteractTraceStartsAtClosestPointDistance = true;
    this->bFilterInteractTracesBehindMyFortPawn = true;
    this->bFilterInteractTracesBehindMyFortPawnOtherThanBuildingActors = false;
    this->bDoNotFilterBuildingActorsThatAreAttachedToPawn = true;
    this->bFilterInteractTracesBehindMyFortPawnOnlyWithMultipleResults = true;
    this->bInteractTracesWithStartPenetratingBlock = true;
    this->bUseReticleAimingIfInitialBlockingInteractTraceBehindMyFortPawn = true;
    this->InteractTracesCapsuleReductionPct = 0.95f;
    this->MobileUpdateCachedInteractActorsCooldown = 0.00f;
    this->MobileUpdateCachedInteractActorsCooldownLength = 5.00f;
    this->bTapInteractEnabled = false;
    this->TouchInteractMode = ETouchInteractMode::Off;
    this->bAllowRetryUse = true;
    this->bAthena = false;
    this->bUsePlayerInsteadOfCameraForTraces = false;
    this->bShouldBlockInteractionsForAllVehiclePassengers = false;
    this->AutoDoorInteractResponse = NULL;
}

void UFortControllerComponent_Interaction::ServerNotifyStartLongUse_Implementation(AActor* ReceivingActor) {
}
bool UFortControllerComponent_Interaction::ServerNotifyStartLongUse_Validate(AActor* ReceivingActor) {
    return true;
}

void UFortControllerComponent_Interaction::ServerNotifyEndLongUse_Implementation(AActor* ReceivingActor) {
}
bool UFortControllerComponent_Interaction::ServerNotifyEndLongUse_Validate(AActor* ReceivingActor) {
    return true;
}

void UFortControllerComponent_Interaction::ServerAttemptInteract_Implementation(AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, TInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestID) {
}
bool UFortControllerComponent_Interaction::ServerAttemptInteract_Validate(AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, TInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestID) {
    return true;
}

UFortInteractContextInfo* UFortControllerComponent_Interaction::K2_GetInteractResponse() {
    return NULL;
}

AActor* UFortControllerComponent_Interaction::GetInteractActor() const {
    return InteractActor;
}

void UFortControllerComponent_Interaction::FixupInteractionWidgetsOnUnzoom() {
}


