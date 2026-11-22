#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerBuildableClassContainer.generated.h"

class ABuildingSMActor;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPlayerBuildableClassContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingSMActor>> BuildingClasses;
    
    FPlayerBuildableClassContainer();
};

