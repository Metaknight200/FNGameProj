#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioGameplayVolumeProxy.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class AUDIOGAMEPLAYVOLUME_API UAudioGameplayVolumeProxy : public UObject {
    GENERATED_BODY()
public:
    UAudioGameplayVolumeProxy();

};

