#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "FortGameplayCueNotify_Burst.h"
#include "GameplayCueBurst_CollisionEffect_Parent.generated.h"

class AActor;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UGameplayCueBurst_CollisionEffect_Parent : public UFortGameplayCueNotify_Burst {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SmallSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AverageSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MediumSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LargeSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ZeroGSoundAsset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioComponentParam AudioParamsArray[2];
    
public:
    UGameplayCueBurst_CollisionEffect_Parent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
};

