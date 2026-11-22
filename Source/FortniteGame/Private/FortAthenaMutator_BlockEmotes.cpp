#include "FortAthenaMutator_BlockEmotes.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_BlockEmotes::AFortAthenaMutator_BlockEmotes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameState = true;
    this->bGlobalEmoteBlock = true;
}

void AFortAthenaMutator_BlockEmotes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_BlockEmotes, bGlobalEmoteBlock);
    DOREPLIFETIME(AFortAthenaMutator_BlockEmotes, BlockEmotesWithTags);
    DOREPLIFETIME(AFortAthenaMutator_BlockEmotes, SpecificEmotesToBlock);
}


