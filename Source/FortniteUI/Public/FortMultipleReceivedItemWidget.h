#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortMultipleReceivedItemWidget.generated.h"

class UFortItemDefinition;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMultipleReceivedItemWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Reward_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Reward_Preview_Shadow;
    
public:
    UFortMultipleReceivedItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisuals(const UFortItemDefinition* RewardItem, int32 ItemQuantity);
    
};

