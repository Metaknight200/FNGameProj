#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolV2_TooltipLayer.generated.h"

class UHUDLayoutToolV2_Tooltip;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolV2_TooltipLayer : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Tooltip* Tooltip_Message;
    
public:
    UHUDLayoutToolV2_TooltipLayer();

};

