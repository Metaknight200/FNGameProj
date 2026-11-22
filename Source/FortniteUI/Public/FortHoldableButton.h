#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "FortHoldableButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortHoldableButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoldableButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreLongPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingHoldPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QualifyingHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldCancelledFromMovement;
    
public:
    UFortHoldableButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldIncreased(const float HoldPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldDecreased(const float HoldPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldCompleted();
    
};

