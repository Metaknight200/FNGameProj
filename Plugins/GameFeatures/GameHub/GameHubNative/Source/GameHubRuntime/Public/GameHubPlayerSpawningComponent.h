#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayspaceComponent_PlayerSpawning.h"
#include "GameHubPlayerSpawningComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEHUBRUNTIME_API UGameHubPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlayerStartRequirements;
    
public:
    UGameHubPlayerSpawningComponent(const FObjectInitializer& ObjectInitializer);

};

