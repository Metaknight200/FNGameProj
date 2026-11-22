#pragma once
#include "CoreMinimal.h"
#include "AudioGameplayComponent.h"
#include "AudioGameplayVolumeComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUDIOGAMEPLAYVOLUME_API UAudioGameplayVolumeComponentBase : public UAudioGameplayComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    UAudioGameplayVolumeComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 InPriority);
    
};

