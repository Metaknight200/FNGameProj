#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AdHocSquadData.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, MinimalAPI)
class UAdHocSquadData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PlayerStates;
    
public:
    UAdHocSquadData();

};

