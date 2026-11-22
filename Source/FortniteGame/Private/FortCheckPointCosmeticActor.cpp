#include "FortCheckPointCosmeticActor.h"
#include "Net/UnrealNetwork.h"

AFortCheckPointCosmeticActor::AFortCheckPointCosmeticActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckPointIndex = 0;
    this->bIsEndPoint = false;
}

void AFortCheckPointCosmeticActor::OnRep_bIsEndPoint() {
}


void AFortCheckPointCosmeticActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCheckPointCosmeticActor, CheckPointIndex);
    DOREPLIFETIME(AFortCheckPointCosmeticActor, bIsEndPoint);
}


