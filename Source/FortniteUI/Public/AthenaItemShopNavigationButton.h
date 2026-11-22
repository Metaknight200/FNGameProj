#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "AthenaItemShopNavigationButton.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaItemShopNavigationButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Section;
    
public:
    UAthenaItemShopNavigationButton();

};

