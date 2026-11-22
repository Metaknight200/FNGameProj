#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "UObject/NoExportTypes.h"
#include "AthenaSkewedTabButton.generated.h"

class UCommonLazyImage;
class UCommonTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSkewedTabButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_Bang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImageSize_Mobile;
    
public:
    UAthenaSkewedTabButton();

};

