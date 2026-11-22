#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_BlockEmotes.generated.h"

UCLASS(Blueprintable, Config=Game)
class AFortAthenaMutator_BlockEmotes : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bGlobalEmoteBlock;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockEmotesWithTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> SpecificEmotesToBlock;
    
    AFortAthenaMutator_BlockEmotes(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

