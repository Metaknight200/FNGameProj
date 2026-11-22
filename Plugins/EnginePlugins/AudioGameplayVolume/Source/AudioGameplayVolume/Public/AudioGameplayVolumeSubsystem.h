#pragma once
#include "CoreMinimal.h"
#include "ActiveSoundUpdateInterface.h"
#include "AudioEngineSubsystem.h"
#include "AudioGameplayVolumeSubsystem.generated.h"

UCLASS(Blueprintable)
class UAudioGameplayVolumeSubsystem : public UAudioEngineSubsystem, public IActiveSoundUpdateInterface {
    GENERATED_BODY()
public:
    UAudioGameplayVolumeSubsystem();


    // Fix for true pure virtual functions not being implemented
};

