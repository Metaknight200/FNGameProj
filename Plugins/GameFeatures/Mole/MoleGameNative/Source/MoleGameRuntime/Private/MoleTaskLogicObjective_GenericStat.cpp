#include "MoleTaskLogicObjective_GenericStat.h"

UMoleTaskLogicObjective_GenericStat::UMoleTaskLogicObjective_GenericStat() {
    this->bUsesAssociatedTaskActors = true;
}

void UMoleTaskLogicObjective_GenericStat::OnTaskLinkComponentGenericStatChanged(UMoleTaskLinkComponent* InTaskLinkComponent, AController* InUser, FGameplayTag InObjectiveStatTag, float InObjectiveStatDelta) {
}


