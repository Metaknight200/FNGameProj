#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "EFortLoginAccountType.h"
#include "PlatformSupportDesc.h"
#include "FortRedirectToEpicAccountWidget.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRedirectToEpicAccountWidget : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformSupportDesc> SupportedPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformSupportDesc DefaultValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CreateAccount;
    
public:
    UFortRedirectToEpicAccountWidget();

    UFUNCTION(BlueprintCallable)
    void SetLoginType(EFortLoginAccountType LoginType);
    
};

