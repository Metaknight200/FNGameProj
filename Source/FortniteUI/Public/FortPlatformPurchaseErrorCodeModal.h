#pragma once
#include "CoreMinimal.h"
#include "FortSubscriptionScreenBase.h"
#include "FortPlatformPurchaseErrorCodeModal.generated.h"

class UCommonButtonBase;
class UCommonTextBlock;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortPlatformPurchaseErrorCodeModal : public UFortSubscriptionScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Descriptions;
    
public:
    UFortPlatformPurchaseErrorCodeModal();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModalBackout();
    
    UFUNCTION(BlueprintCallable)
    void ExitModal();
    
};

