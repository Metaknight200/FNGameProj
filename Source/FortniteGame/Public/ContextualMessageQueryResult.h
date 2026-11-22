#pragma once
#include "CoreMinimal.h"
#include "ConversationTypes.h"
#include "ContextualMessageQueryResult.generated.h"

USTRUCT(BlueprintType)
struct FContextualMessageQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConversationNodeParameterPair> MetadataParameters;
    
    FORTNITEGAME_API FContextualMessageQueryResult();
};

