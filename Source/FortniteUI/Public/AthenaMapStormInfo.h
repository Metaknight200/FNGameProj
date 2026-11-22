#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortHUDElementWidget.h"
#include "AthenaMapStormInfo.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapStormInfo : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SafeZoneDamageAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SafeZonePhaseFormatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StormDamageFormatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SafeZonePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_StormDamage;
    
public:
    UAthenaMapStormInfo();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSafeZonePhaseChanged(int32 SafeZonePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSafeZoneCountChanged(int32 SafeZoneCount);
    
};

