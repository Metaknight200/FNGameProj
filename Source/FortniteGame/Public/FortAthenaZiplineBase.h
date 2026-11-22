#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "FortAthenaZiplineBase.generated.h"

class AFortPlayerPawn;

UCLASS(Blueprintable)
class AFortAthenaZiplineBase : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> CurrentInteractingPawn;
    
public:
    AFortAthenaZiplineBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseInteractToEnterZipline() const;
    
};

