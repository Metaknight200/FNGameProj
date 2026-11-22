#include "FortAthenaMutator_CreativeRespawnWave.h"

AFortAthenaMutator_CreativeRespawnWave::AFortAthenaMutator_CreativeRespawnWave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->RespawnWaveType = ECreativeRespawnWaveType::None;
}


