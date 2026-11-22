#include "FortContextualTutorialDefinition.h"

UFortContextualTutorialDefinition::UFortContextualTutorialDefinition() {
    this->ContextualTutorialClass = NULL;
    this->Priority = 0;
    this->AmountOfRecallMatches = 1;
    this->TriggerActivationDelay = 0.75f;
    this->MessageDisplayTime = 5.00f;
    this->SuccesMessageDisplayTime = 4.00f;
    this->ReminderDelay = 10.00f;
    this->ReminderAmount = 1;
    this->InformativeMessageDelay = 10.00f;
    this->LockedDelay = 0.00f;
    this->QueuedActivateDelay = 1.00f;
    this->bQueueActivation = false;
    this->AccountLevelLimit = 6;
    this->bCanBeShownInCombat = false;
    this->bIsCompletionSilent = false;
    this->bAlwaysSendSuccess = false;
    this->bCanSetMessagingSystemOnCooldown = true;
    this->bCanBeShownWhileDBNO = false;
    this->Platform = EFortContextualTutorialPlatform::Any;
    this->bRequireSquad = false;
    this->bRequireSolo = false;
    this->bActivateInBR = true;
    this->bActivateInCreative = false;
    this->bIsEnabled = true;
}


