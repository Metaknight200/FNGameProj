#pragma once
#include "CoreMinimal.h"
#include "FortBattlePassCustomSkinPageBase.h"
#include "FortBattlePassCustomSkinPageS17.generated.h"

class UFortBattlePassTutorialTooltipS17;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBattlePassCustomSkinPageS17 : public UFortBattlePassCustomSkinPageBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassTutorialTooltipS17* TutorialTooltip_PurchaseStyle;
    
public:
    UFortBattlePassCustomSkinPageS17();

};

