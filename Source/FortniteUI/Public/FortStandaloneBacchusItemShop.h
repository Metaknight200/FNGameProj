#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortStandaloneItemShop.h"
#include "FortStandaloneBacchusItemShop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortStandaloneBacchusItemShop : public UFortStandaloneItemShop {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TabButtonIconSize;
    
public:
    UFortStandaloneBacchusItemShop();

};

