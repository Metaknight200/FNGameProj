#pragma once
#include "CoreMinimal.h"
#include "BattlePassInputData.h"
#include "BattlePassBulkBuyInputData.generated.h"

UCLASS(Blueprintable)
class FORTNITEUI_API UBattlePassBulkBuyInputData : public UBattlePassInputData {
    GENERATED_BODY()
public:
    UBattlePassBulkBuyInputData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetData(bool& IsPageCompleted, int32& StartingPage, int32& EndingPage, int32& PurchaseCost);
    
};

