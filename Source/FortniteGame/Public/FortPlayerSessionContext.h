#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortLocalPlayerSubsystem.h"
#include "FortPlayerSessionContext.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortPlayerSessionContext : public UFortLocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DiscoveredPoiTags;
    
public:
    UFortPlayerSessionContext();

};

