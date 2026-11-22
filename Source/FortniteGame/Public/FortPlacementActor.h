#pragma once
#include "CoreMinimal.h"
#include "BuildingActor.h"
#include "FortPlacementActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlacementActor : public ABuildingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OccupyingActor;
    
    AFortPlacementActor(const FObjectInitializer& ObjectInitializer);

};

