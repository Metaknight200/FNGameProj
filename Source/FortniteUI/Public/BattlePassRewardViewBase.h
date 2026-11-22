#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "BattlePassRewardViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassRewardViewBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UBattlePassRewardViewBase();

};

