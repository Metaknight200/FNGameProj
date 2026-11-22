#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortCustomFeedMessageConfig.generated.h"

class UFortCustomFeedMessageGeneratorBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCustomFeedMessageConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UFortCustomFeedMessageGeneratorBase*> FeedMessageGeneratorsByID;
    
    UFortCustomFeedMessageConfig();

};

