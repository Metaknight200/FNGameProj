#include "FortAthenaAIBotEvaluator_DormantUntilPhase.h"

UFortAthenaAIBotEvaluator_DormantUntilPhase::UFortAthenaAIBotEvaluator_DormantUntilPhase() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Dormant_ExecutionStatus");
    this->RequiredGamePhaseStep = EAthenaGamePhaseStep::BusFlying;
}

void UFortAthenaAIBotEvaluator_DormantUntilPhase::HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}


