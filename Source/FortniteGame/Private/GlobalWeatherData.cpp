#include "GlobalWeatherData.h"

FGlobalWeatherData::FGlobalWeatherData() {
    this->Frequency = NULL;
    this->Chance = NULL;
    this->BotVisibilityScale = NULL;
    this->PostProcessBlendWeight = NULL;
    this->TimeForNextAttempt = 0.00f;
    this->bIsEnabled = false;
}

