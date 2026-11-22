#include "FortNavigationActor_MapTable.h"
#include "Components/StaticMeshComponent.h"

AFortNavigationActor_MapTable::AFortNavigationActor_MapTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ApolloMap = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ApolloMap"));
    this->ReferencePlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReferencePlane"));
    this->ApolloMap->SetupAttachment(DisplayMesh);
    this->ReferencePlane->SetupAttachment(ApolloMap);
}


void AFortNavigationActor_MapTable::HandleActiveEventsChanged(const TArray<FString>& ActiveEventFlags) {
}


