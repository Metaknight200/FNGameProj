#pragma once
#include "CoreMinimal.h"
#include "FortActorIndicatorWidget.h"
#include "MoleSubobjectiveIndicatorWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleSubobjectiveIndicatorWidget : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumRelativeHeightBeforeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionRelativeHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsScreenClamped: 1;
    
public:
    UMoleSubobjectiveIndicatorWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetUsageMode(bool bUseGoalIndicatorMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenClampChanged(bool bScreenClamped);
    
};

