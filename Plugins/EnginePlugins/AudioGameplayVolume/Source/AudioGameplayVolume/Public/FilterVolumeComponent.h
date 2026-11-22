#pragma once
#include "CoreMinimal.h"
#include "AudioGameplayVolumeComponentBase.h"
#include "FilterVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUDIOGAMEPLAYVOLUME_API UFilterVolumeComponent : public UAudioGameplayVolumeComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExteriorLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExteriorLPFTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteriorLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteriorLPFTime;
    
public:
    UFilterVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInteriorLPF(float Volume, float InterpolateTime);
    
    UFUNCTION(BlueprintCallable)
    void SetExteriorLPF(float Volume, float InterpolateTime);
    
};

