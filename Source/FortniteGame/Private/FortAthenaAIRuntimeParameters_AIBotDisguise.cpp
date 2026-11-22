#include "FortAthenaAIRuntimeParameters_AIBotDisguise.h"

UFortAthenaAIRuntimeParameters_AIBotDisguise::UFortAthenaAIRuntimeParameters_AIBotDisguise() {
    this->bShouldApplyDisguise = false;
    this->bRevealDisguiseOnDamage = false;
    this->bRevealOnDamageExcludeAIPawnDamage = false;
    this->bRevealDisguiseOnPlayerProximity = false;
    this->RevealPlayerProximityDistanceSqr = 0.00f;
    this->RevealPlayerProximityMinDuration = 0.00f;
    this->RevealPlayerProximityMaxDuration = 0.00f;
    this->NameSettingsAfterReveal = NULL;
    this->DisguiseConversationComponentOverride = NULL;
}


