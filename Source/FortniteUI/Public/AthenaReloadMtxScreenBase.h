#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortHUDShutdownTimerInterface.h"
#include "FortItemPreviewScreen.h"
#include "AthenaReloadMtxScreenBase.generated.h"

class UAthenaSmallOfferPreviewBase;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortStoreFrontOfferInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReloadMtxScreenBase : public UFortItemPreviewScreen, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AmountNeeded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSmallOfferPreviewBase* SmallOfferPreview_Widget;
    
public:
    UAthenaReloadMtxScreenBase();

private:
    UFUNCTION(BlueprintCallable)
    void HandleBackButton(bool& bPassThrough);
    

    // Fix for true pure virtual functions not being implemented
};

