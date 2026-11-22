#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortAccountItemDefinition.h"
#include "RepeatableDailiesCardDateOverride.h"
#include "FortRepeatableDailiesCardItemDefinition.generated.h"

class UFortAthenaRewardEventGraphPurchaseToken;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortRepeatableDailiesCardItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GranterQuestPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReplacedRestedXpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReducedXPReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReplacedRestedXpValueScalarForMissedDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAthenaRewardEventGraphPurchaseToken> RequiredItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRepeatableDailiesCardDateOverride> DateOverrides;
    
    UFortRepeatableDailiesCardItemDefinition();

public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("RepeatableDailiesCard", GetFName());
    }
};

