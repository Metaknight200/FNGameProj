#include "FortAIFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UFortAIFunctionLibrary::UFortAIFunctionLibrary() {
}

bool UFortAIFunctionLibrary::TeleportAIPawn(AFortAIPawn* AIPawn, FVector DestLocation, FRotator DestRotation, bool bIgnoreCollision) {
    return false;
}

void UFortAIFunctionLibrary::SetHearingRange(AActor* AIAgent, float Range) {
}

void UFortAIFunctionLibrary::RequestNavUpdateForBuilding(ABuildingActor* BuildingActor) {
}

void UFortAIFunctionLibrary::MakeNoiseEventAtLocation(AActor* NoiseMaker, const float MaxRange, const FVector& NoiseLocation, const FName NoiseTag) {
}

void UFortAIFunctionLibrary::MakeNoiseEvent(AActor* NoiseMaker, const float MaxRange, const FName NoiseTag) {
}

bool UFortAIFunctionLibrary::IsConcealedByPerceptionModifiers(const UObject* WorldContextObject, FVector ObserverLocation, FVector TargetLocation, float& OutConcealment) {
    return false;
}

UFortAthenaAIRuntimeParameters* UFortAIFunctionLibrary::GetOrCreateAIRuntimeParameters(const AAIController* AIController, const TSubclassOf<UFortAthenaAIRuntimeParameters> ParametersClass) {
    return NULL;
}

UAthenaAISpawner* UFortAIFunctionLibrary::GetAISpawner(UObject* WorldContextObject) {
    return NULL;
}


