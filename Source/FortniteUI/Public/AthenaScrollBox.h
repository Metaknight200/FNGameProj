#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "AthenaScrollBox.generated.h"

UCLASS(Blueprintable)
class UAthenaScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFixedPageOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableClickThrough;
    
    UAthenaScrollBox();

};

