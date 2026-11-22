#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemData.h"
#include "BattlePassLevelReward.h"
#include "AthenaSeasonItemData_BattlePass.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSeasonItemData_BattlePass : public UAthenaSeasonItemData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattlePassLevelReward> RewardsGrantedForPremiumBattlePassLevels;
    
public:
    UAthenaSeasonItemData_BattlePass();

};

