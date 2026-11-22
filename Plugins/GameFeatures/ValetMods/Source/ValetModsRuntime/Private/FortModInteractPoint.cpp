#include "FortModInteractPoint.h"
#include "Net/UnrealNetwork.h"

AFortModInteractPoint::AFortModInteractPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AFortModInteractPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortModInteractPoint, InteractText);
}


