#pragma once
#include "CoreMinimal.h"
#include "AudioGameplayVolumeComponentBase.h"
#include "AttenuationVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUDIOGAMEPLAYVOLUME_API UAttenuationVolumeComponent : public UAudioGameplayVolumeComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExteriorVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExteriorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteriorVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteriorTime;
    
public:
    UAttenuationVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInteriorVolume(float Volume, float InterpolateTime);
    
    UFUNCTION(BlueprintCallable)
    void SetExteriorVolume(float Volume, float InterpolateTime);
    
};

