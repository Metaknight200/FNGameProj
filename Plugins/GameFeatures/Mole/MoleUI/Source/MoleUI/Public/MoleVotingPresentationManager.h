#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ScalableFloat.h"
#include "Templates/SubclassOf.h"
#include "MoleVotingPresentationManager.generated.h"

class AFortPlayerStart;
class APlayerState;
class UMoleVoteTallyWidgetComponent;

UCLASS(Abstract, Blueprintable)
class AMoleVotingPresentationManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeBetweenVoteReveals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerTallyWidgetComponentRelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SkipTallyWidgetComponentRelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfTallyWidgetSizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMoleVoteTallyWidgetComponent> VoteTallyWidgetComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoleVoteTallyWidgetComponent*> TallyWidgetComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, AFortPlayerStart*> PlayerStartsPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SkippedVotesSpawnPoint;
    
public:
    AMoleVotingPresentationManager(const FObjectInitializer& ObjectInitializer);

};

