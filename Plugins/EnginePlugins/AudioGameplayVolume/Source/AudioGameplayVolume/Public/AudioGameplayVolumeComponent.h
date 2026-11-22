#pragma once
#include "CoreMinimal.h"
#include "AudioGameplayComponent.h"
#include "AudioGameplayVolumeComponent.generated.h"

class UAudioGameplayVolumeProxy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUDIOGAMEPLAYVOLUME_API UAudioGameplayVolumeComponent : public UAudioGameplayComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioGameplayVolumeProxy* Proxy;
    
public:
    UAudioGameplayVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

