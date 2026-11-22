#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortGameplayCueNotify_Loop.h"
#include "FortGameplayCueNotifyAthena_AIAlertState.generated.h"

class AFortPlayerPawn;
class UFortAbilitySystemComponent;
class UFortAthenaAlertStateComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortGameplayCueNotifyAthena_AIAlertState : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SpriteMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpriteMeshAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpriteMeshRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FillIconDataFloatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthMeterStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentGameplayEffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentStealthMeterPctFilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAlertStateComponent* CurrentAlertStateComponent;
    
public:
    AFortGameplayCueNotifyAthena_AIAlertState(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void AlertStateHideTagCallback(const FGameplayTag Tag, int32 NewCount);
    
};

