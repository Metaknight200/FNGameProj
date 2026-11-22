#pragma once
#include "CoreMinimal.h"
#include "HUDLayoutToolV2_WidgetPreview.h"
#include "HUDLayoutToolV2_KeyButtonPreview.generated.h"

class UFortKeybindWidget;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_KeyButtonPreview : public UHUDLayoutToolV2_WidgetPreview {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindWidget;
    
public:
    UHUDLayoutToolV2_KeyButtonPreview();

};

