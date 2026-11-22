#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "CommonPopupButtonLegacy.generated.h"

class UCommonPopupMenuLegacy;
class UMenuAnchor;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUILEGACY_API UCommonPopupButtonLegacy : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* PopupMenuAnchor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPopupMenuLegacy* PopupMenu;
    
public:
    UCommonPopupButtonLegacy();

private:
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetMenuAnchorWidget();
    
};

