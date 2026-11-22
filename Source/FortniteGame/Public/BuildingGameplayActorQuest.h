#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActor.h"
#include "BuildingGameplayActorQuest.generated.h"

UCLASS(Blueprintable)
class ABuildingGameplayActorQuest : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuppressSimpleInteractionWidgetForTouch: 1;
    
public:
    ABuildingGameplayActorQuest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetStaticGameplayTags();
    
};

