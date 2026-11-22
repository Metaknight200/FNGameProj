#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "ProgressiveStageItemInfo.h"
#include "FortProgressiveItemWidget.generated.h"

class UAthenaItemShopReactiveTileText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortProgressiveItemWidget : public UCommonButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopReactiveTileText* TileText_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FProgressiveStageItemInfo StageItemInfo;
    
public:
    UFortProgressiveItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhighlighted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStageItemChanged(const FProgressiveStageItemInfo& InStageItemInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPeekStateChanged(bool bIsInPeekState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighlighted();
    
};

