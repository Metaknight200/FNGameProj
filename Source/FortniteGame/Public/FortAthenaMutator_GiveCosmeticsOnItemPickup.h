#pragma once
#include "CoreMinimal.h"
#include "CosmeticsToApplyOnItemPickupData.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_GiveCosmeticsOnItemPickup.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class AFortAthenaMutator_GiveCosmeticsOnItemPickup : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFortItemDefinition*, FCosmeticsToApplyOnItemPickupData> PickupToSkinDataMap;
    
public:
    AFortAthenaMutator_GiveCosmeticsOnItemPickup(const FObjectInitializer& ObjectInitializer);

};

