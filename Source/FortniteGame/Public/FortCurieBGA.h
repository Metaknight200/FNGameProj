#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "FortCurieBGA.generated.h"

class UFortCurieComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortCurieBGA : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCurieComponent* CurieComponent;
    
public:
    AFortCurieBGA(const FObjectInitializer& ObjectInitializer);

};

