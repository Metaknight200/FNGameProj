#pragma once
#include "CoreMinimal.h"
#include "SettingsScreen.h"
#include "CheatSettingsScreen.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCheatSettingsScreen : public USettingsScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
public:
    UCheatSettingsScreen();

};

