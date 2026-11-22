#pragma once
#include "CoreMinimal.h"
#include "FortQuickBars.h"
#include "FortQuickBarsAthena.generated.h"

UCLASS(Blueprintable, Config=Engine)
class AFortQuickBarsAthena : public AFortQuickBars {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerPrimarySlotsUpdateDelay;
    
public:
    AFortQuickBarsAthena(const FObjectInitializer& ObjectInitializer);

};

