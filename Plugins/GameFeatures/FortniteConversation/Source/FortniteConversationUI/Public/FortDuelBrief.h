#pragma once
#include "CoreMinimal.h"
#include "FortItemTransactionBrief.h"
#include "FortDuelBrief.generated.h"

class UCommonRichTextBlock;
class UCommonTileView;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDuelBrief : public UFortItemTransactionBrief {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* TileView;
    
public:
    UFortDuelBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayLootItems(const TArray<UFortItem*>& Items);
    
};

