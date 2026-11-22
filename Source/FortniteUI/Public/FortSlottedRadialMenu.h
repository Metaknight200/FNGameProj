#pragma once
#include "CoreMinimal.h"
#include "ECardinalPoint.h"
#include "ERadialOrderingMode.h"
#include "FortRadialMenu.h"
#include "FortSlottedRadialMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortSlottedRadialMenu : public UFortRadialMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERadialOrderingMode OrderingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECardinalPoint> CustomOrdering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsManySlotsAsItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSlotsSupported;
    
public:
    UFortSlottedRadialMenu();

};

