#pragma once
#include "CoreMinimal.h"
#include "TireInfo.h"
#include "FortValetModBase.h"
#include "FortValetMod_Tire.generated.h"

UCLASS(Blueprintable)
class VALETMODSRUNTIME_API AFortValetMod_Tire : public AFortValetModBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTireInfo TireData;
    
    AFortValetMod_Tire(const FObjectInitializer& ObjectInitializer);

};

