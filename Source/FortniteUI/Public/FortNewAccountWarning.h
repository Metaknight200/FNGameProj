#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortNewAccountWarning.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNewAccountWarning : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_NewAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Back;
    
public:
    UFortNewAccountWarning();

};

