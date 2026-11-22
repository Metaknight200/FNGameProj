#include "FortAthenaBTService_ManageWeapon.h"

UFortAthenaBTService_ManageWeapon::UFortAthenaBTService_ManageWeapon() {
    this->NodeName = TEXT("AI Bot Manage Weapon");
    this->WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    this->WeaponTriggerMeleeName = TEXT("AIEvaluator_WeaponTriggerMelee_ExecutionStatus");
    this->WeaponTriggerThrowableName = TEXT("AIEvaluator_WeaponTriggerThrowable_ExecutionStatus");
    this->WeaponReloadName = TEXT("AIEvaluator_WeaponReload_ExecutionStatus");
    this->WeaponName = TEXT("AIEvaluator_Global_DesiredWeapon");
    this->WeaponTargetingName = TEXT("AIEvaluator_WeaponTargeting_ExecutionStatus");
    this->SprintExecutionStatusName = TEXT("AIEvaluator_Sprinting_ExecutionStatus");
    this->bEndChargeOnFireStop = false;
}

void UFortAthenaBTService_ManageWeapon::ManageWeaponTargeting(UBehaviorTreeComponent* OwnerComp) const {
}


