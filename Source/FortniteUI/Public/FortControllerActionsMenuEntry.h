#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortControllerActionsMenuEntry.generated.h"

class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortControllerActionsMenuEntry : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Action;
    
public:
    UFortControllerActionsMenuEntry();

};

