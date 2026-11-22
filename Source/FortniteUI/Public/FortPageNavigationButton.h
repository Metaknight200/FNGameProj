#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "FortPageNavigationButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPageNavigationButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ButtonLabel;
    
public:
    UFortPageNavigationButton();

};

