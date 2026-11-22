#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDElementProxy.h"
#include "HUDLayoutToolV2_KeyButtonProxy.generated.h"

class UFortKeybindWidget;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_KeyButtonProxy : public UFortMobileHUDElementProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindWidget;
    
public:
    UHUDLayoutToolV2_KeyButtonProxy();

};

