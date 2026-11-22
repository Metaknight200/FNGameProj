#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortTournamentAbandonMatchDialog.generated.h"

class UCommonButtonLegacy;
class UCommonDateTimeTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentAbandonMatchDialog : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_LeaveMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ContinueMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonDateTimeTextBlock* Text_LeaveMatchTime;
    
public:
    UFortTournamentAbandonMatchDialog();

};

