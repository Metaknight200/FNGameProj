#pragma once
#include "CoreMinimal.h"
#include "ESpecialRelevancyMode.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PhaseLevelEntry.h"
#include "Templates/SubclassOf.h"
#include "PhaseInfo.generated.h"

class ASpecialEventPhase;

USTRUCT(BlueprintType)
struct FPhaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpecialEventPhase> PhaseActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PhaseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialRelevancyMode RelevancyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfSquadsInRelevancyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequireLevelsFromPhaseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartNextPhaseOnPhaseFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhaseLevelEntry> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpecialEventPhase* PhaseActor;
    
    SPECIALEVENTGAMEPLAYRUNTIME_API FPhaseInfo();
};

