#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortRarity.h"
#include "FortRarityItemData.h"
#include "AthenaInventoryItemStatEntry.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryItemStatEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_StatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_StatDeltaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatDeltaTextFormat;
    
public:
    UAthenaInventoryItemStatEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatInitialized(const float Value, const float ComparisonValue, const float MinValue, const float MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRaritySet(const EFortRarity ItemRarity, const FFortRarityItemData RarityItemData);
    
};

