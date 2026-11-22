#pragma once
#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "AudioEngineSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITECOMPATIBILITY_API UAudioEngineSubsystem : public UDynamicSubsystem {
    GENERATED_BODY()
public:
    UAudioEngineSubsystem();

};

