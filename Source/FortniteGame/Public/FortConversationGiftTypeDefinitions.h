#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ConversationGiftTypeDefinition.h"
#include "FortConversationGiftTypeDefinitions.generated.h"

UCLASS(Blueprintable)
class UFortConversationGiftTypeDefinitions : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FConversationGiftTypeDefinition> GiftDefinitionsByGiftTag;
    
public:
    UFortConversationGiftTypeDefinitions();

};

