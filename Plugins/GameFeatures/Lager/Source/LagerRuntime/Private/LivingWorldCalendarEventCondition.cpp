#include "LivingWorldCalendarEventCondition.h"

FLivingWorldCalendarEventCondition::FLivingWorldCalendarEventCondition() {
    this->Behavior = ELivingWorldCalendarEventConditionBehavior::IsActive;
    this->ShouldEventBeActive = false;
    this->RatioBehavior = ELivingWorldCalendarEventConditionRatioBehavior::Less;
    this->RatioValue = 0.00f;
    this->RatioMaxValue = 0.00f;
}

