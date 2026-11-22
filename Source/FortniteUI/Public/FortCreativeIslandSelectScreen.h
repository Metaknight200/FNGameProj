#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortCreativeIslandSelectScreen.generated.h"

class UCommonActivatableWidgetSwitcher;
class UCommonButtonBase;
class UFortCreativeTabGroup;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandSelectScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeTabGroup* Tab_Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Widget_Switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Cancel;
    
public:
    UFortCreativeIslandSelectScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleTabChanged(int32 TabIndex);
    
};

