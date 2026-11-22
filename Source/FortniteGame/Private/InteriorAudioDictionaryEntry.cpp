#include "InteriorAudioDictionaryEntry.h"

FInteriorAudioDictionaryEntry::FInteriorAudioDictionaryEntry() {
    this->Tags = 0;
    this->DefaultEvaluation = EInteriorAudioBuildingEvaluation::Invalid;
    this->ConditionalEvaluation = EInteriorAudioBuildingEvaluation::Invalid;
    this->BuildingWeights[0] = 0;
    this->BuildingWeights[1] = 0;
    this->BuildingWeights[2] = 0;
    this->BuildingWeights[3] = 0;
    this->BuildingWeights[4] = 0;
}

