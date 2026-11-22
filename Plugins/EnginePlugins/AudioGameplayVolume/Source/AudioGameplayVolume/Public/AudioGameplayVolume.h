#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AudioGameplayVolume.generated.h"

class UAudioGameplayVolumeComponent;

UCLASS(Blueprintable)
class AUDIOGAMEPLAYVOLUME_API AAudioGameplayVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioGameplayVolumeComponent* AGVComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    AAudioGameplayVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
};

