#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "GameplayTagContainer.h"
#include "MoleGameBaseMutator.generated.h"

UCLASS(Blueprintable)
class AMoleGameBaseMutator : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockedEmoteTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockedEmoteTagsForGhosts;
    
public:
    AMoleGameBaseMutator(const FObjectInitializer& ObjectInitializer);

};

