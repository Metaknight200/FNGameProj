#include "FortMeshNetworkEventsLoader.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AFortMeshNetworkEventsLoader::AFortMeshNetworkEventsLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bMeshNetworkReady = false;
}

void AFortMeshNetworkEventsLoader::OnMeshNetworkReady(EMeshNetworkNodeType NodeType) {
}

void AFortMeshNetworkEventsLoader::MulticastMeshNetEventBurst_Implementation(FName EventName, const FString& EventParams, const FGameplayTagContainer& Filters) {
}

void AFortMeshNetworkEventsLoader::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMeshNetworkEventsLoader, ActiveMeshNetworkEvents);
}


