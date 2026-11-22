#pragma once
#include "CoreMinimal.h"
#include "AudioGameplayVolumeProxy.h"
#include "AGVTestProxy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAGVTestProxy : public UAudioGameplayVolumeProxy {
    GENERATED_BODY()
public:
    UAGVTestProxy();

};

