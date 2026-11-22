#include "FortBotStructureBuilder.h"
#include "Components/SceneComponent.h"

AFortBotStructureBuilder::AFortBotStructureBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->BuildingInstructions = NULL;
    this->CachedGoal = NULL;
}

void AFortBotStructureBuilder::RunDeconstructor() {
}

void AFortBotStructureBuilder::OnBuildingDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortBotStructureBuilder::BuildAll() {
}


