#include "FortControllerAIBotComponentTelemetryData_Disguise.h"

FFortControllerAIBotComponentTelemetryData_Disguise::FFortControllerAIBotComponentTelemetryData_Disguise() {
    this->bWasDisguised = false;
    this->bWasRevealed = false;
    this->RevealReason = EFortPawnComponent_DisguiseRevealReason::ByDamage;
}

