#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "AthenaSocialScreen.generated.h"

class UCommonButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI, Config=Game)
class UAthenaSocialScreen : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ViewCareer;
    
public:
    UAthenaSocialScreen();

private:
    UFUNCTION(BlueprintCallable)
    void ShowCareerScreen();
    
};

