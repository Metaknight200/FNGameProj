#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "BattlePassSubPageInterface.h"
#include "BattlePassRewardPageBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPASSBASE_API UBattlePassRewardPageBase : public UCommonActivatableWidget, public IBattlePassSubPageInterface {
    GENERATED_BODY()
public:
    UBattlePassRewardPageBase();


    // Fix for true pure virtual functions not being implemented
};

