#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolV2_Tooltip.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolV2_Tooltip : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_Description;
    
public:
    UHUDLayoutToolV2_Tooltip();

};

