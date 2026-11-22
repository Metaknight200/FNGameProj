#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UraniumPOIData.generated.h"

class ACameraActor;
class AFortCheckPointSplineActor;

USTRUCT(BlueprintType)
struct FUraniumPOIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag POITag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortCheckPointSplineActor> SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACameraActor> CameraActor;
    
    FORTNITEGAME_API FUraniumPOIData();
};

