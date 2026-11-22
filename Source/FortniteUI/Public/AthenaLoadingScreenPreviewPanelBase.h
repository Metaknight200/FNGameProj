#pragma once
#include "CoreMinimal.h"
#include "AthenaLoadingScreenPreviewPanel.h"
#include "AthenaLoadingScreenPreviewPanelBase.generated.h"

class UCommonButtonLegacy;
class UNativeWidgetHost;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaLoadingScreenPreviewPanelBase : public UAthenaLoadingScreenPreviewPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNativeWidgetHost* LoadingScreenSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CloseMobile;
    
public:
    UAthenaLoadingScreenPreviewPanelBase();

};

