#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionCancellability.h"
#include "FortSubscriptionPlatformModal.h"
#include "FortSubscriptionCancellationModal.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSubscriptionCancellationModal : public UFortSubscriptionPlatformModal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CancelSubscription;
    
public:
    UFortSubscriptionCancellationModal();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCancelDisplay(bool bCanCancelDirectly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSpinner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModalCancellationBackout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSpinner();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubscriptionCancellability GetSubscriptionCancellabillity() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearDynamicBulletPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddDynamicBulletPoints(const TArray<FText>& BulletPointTexts);
    
};

