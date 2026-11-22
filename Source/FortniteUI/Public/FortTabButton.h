#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "UObject/NoExportTypes.h"
#include "FortTabButtonInterface.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabButton.generated.h"

class UCommonLazyImage;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortTabButton : public UCommonButtonBase, public IFortTabButtonInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImageSize_Mobile;
    
public:
    UFortTabButton();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTabLabelInfo_Implementation(const FFortTabButtonLabelInfo& TabLabelInfo);
    

    // Fix for true pure virtual functions not being implemented
};

