#pragma once
#include "CoreMinimal.h"
#include "FortServerBrowser.h"
#include "FortServerBrowserBattleLab.generated.h"

class UCommonButtonLegacy;
class UFortMatchmakingKnobsModal;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortServerBrowserBattleLab : public UFortServerBrowser {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ResetIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MatchmakingKnobs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchmakingKnobsModal* Modal_MatchmakingKnobs;
    
public:
    UFortServerBrowserBattleLab();

};

