#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "LTMWidgetBase.h"
#include "RebirthLimitedLivesWidgetBase.generated.h"

class AFortAthenaMutator_Rebirth;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class URebirthLimitedLivesWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_Rebirth> RebirthMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> ViewedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortRarity CurrentRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLivesRemaining;
    
public:
    URebirthLimitedLivesWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetRarity(bool bPlayAnimations);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerRaritiesUpdated();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLastLife();
    
};

