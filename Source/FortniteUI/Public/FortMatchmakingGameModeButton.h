#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortMatchmakingGameModeButton.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchmakingGameModeButton : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* IconTextButton_Play;
    
public:
    UFortMatchmakingGameModeButton();

};

