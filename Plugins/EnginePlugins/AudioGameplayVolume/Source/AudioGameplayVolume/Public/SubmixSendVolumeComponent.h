#pragma once
#include "CoreMinimal.h"
#include "Sound/AudioVolume.h"
#include "AudioGameplayVolumeComponentBase.h"
#include "SubmixSendVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUDIOGAMEPLAYVOLUME_API USubmixSendVolumeComponent : public UAudioGameplayVolumeComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings;
    
public:
    USubmixSendVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSubmixSendSettings(const TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);
    
};

