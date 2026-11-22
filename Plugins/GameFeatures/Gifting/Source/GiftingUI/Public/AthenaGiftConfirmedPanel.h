#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaGiftConfirmedPanel.generated.h"

class UCommonButtonLegacy;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGiftConfirmedPanel : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_RecipientInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Back;
    
public:
    UAthenaGiftConfirmedPanel();

};

