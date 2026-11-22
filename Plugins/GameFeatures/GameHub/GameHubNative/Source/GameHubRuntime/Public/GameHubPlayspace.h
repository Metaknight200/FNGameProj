#pragma once
#include "CoreMinimal.h"
#include "FortPlayspace.h"
#include "GameplayTagContainer.h"
#include "GameHubPlayspace.generated.h"

UCLASS(Blueprintable)
class GAMEHUBRUNTIME_API AGameHubPlayspace : public AFortPlayspace {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulatePlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlayerStartRequirements;
    
public:
    AGameHubPlayspace(const FObjectInitializer& ObjectInitializer);

};

