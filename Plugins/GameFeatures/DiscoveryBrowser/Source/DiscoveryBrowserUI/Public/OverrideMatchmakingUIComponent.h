#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MatchmakingUIOverride.h"
#include "OverrideMatchmakingUIComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOverrideMatchmakingUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingUIOverride MatchmakingUIOverride;
    
public:
    UOverrideMatchmakingUIComponent(const FObjectInitializer& ObjectInitializer);

};

