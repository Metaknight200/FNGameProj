#pragma once
#include "CoreMinimal.h"
#include "GameFeatureComponentEntry.generated.h"

class AActor;
class UActorComponent;

USTRUCT(BlueprintType)
struct GAMEFEATURES_API FGameFeatureComponentEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActorComponent> ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClientComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bServerComponent: 1;
    
    FGameFeatureComponentEntry();
};

