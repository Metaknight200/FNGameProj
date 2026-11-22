#include "FortAthenaMutator_Traverse.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Traverse::AFortAthenaMutator_Traverse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPointIndex = -1;
    this->TraversePointClass = NULL;
    this->BoundsXYSplineClass = NULL;
}

void AFortAthenaMutator_Traverse::OnRep_CurrentPointIndex() {
}

void AFortAthenaMutator_Traverse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Traverse, TraversePoints);
    DOREPLIFETIME(AFortAthenaMutator_Traverse, CurrentPointIndex);
}


