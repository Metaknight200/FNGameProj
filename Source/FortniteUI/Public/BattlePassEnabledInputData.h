#pragma once
#include "CoreMinimal.h"
#include "BattlePassInputData.h"
#include "BattlePassEnabledInputData.generated.h"

UCLASS(Blueprintable)
class FORTNITEUI_API UBattlePassEnabledInputData : public UBattlePassInputData {
    GENERATED_BODY()
public:
    UBattlePassEnabledInputData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetData(bool& InIsEnabled);
    
};

