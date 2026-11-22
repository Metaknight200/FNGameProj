#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "HUDLayoutToolV2_LinkAcrossWarningIndicator.generated.h"

class UHUDLayoutToolV2_TooltipLayer;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolV2_LinkAcrossWarningIndicator : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TooltipOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TooltipAllignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WarningMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_TooltipLayer* TooltipLayer;
    
public:
    UHUDLayoutToolV2_LinkAcrossWarningIndicator();

};

