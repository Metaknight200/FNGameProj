#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "BattlePassSubPageInterface.h"
#include "FortBattlePassBulkBuyPageBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPASSBASE_API UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget, public IBattlePassSubPageInterface {
    GENERATED_BODY()
public:
    UFortBattlePassBulkBuyPageBase();


    // Fix for true pure virtual functions not being implemented
};

