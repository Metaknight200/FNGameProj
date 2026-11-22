#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_Phosphorus.h"
#include "FortAthenaMutator_PhosphorusWipeout.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_PhosphorusWipeout : public AFortAthenaMutator_Phosphorus {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OutsideSafeZoneEliminatedOverlayText;
    
public:
    AFortAthenaMutator_PhosphorusWipeout(const FObjectInitializer& ObjectInitializer);

};

