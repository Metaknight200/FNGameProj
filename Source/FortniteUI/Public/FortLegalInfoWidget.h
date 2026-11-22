#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortLegalInfoWidget.generated.h"

class UCommonButtonLegacy;
class UCommonWidgetSwitcherLegacy;
class UFortTabListWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortLegalInfoWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* WidgetSwitcher_Legal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList_LegalOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_PrivacyPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_FanContentPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_TermsOfService;
    
public:
    UFortLegalInfoWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddJapaneseEULATabs();
    
};

