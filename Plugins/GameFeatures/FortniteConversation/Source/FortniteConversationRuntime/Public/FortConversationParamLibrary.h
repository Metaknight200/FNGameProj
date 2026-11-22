#pragma once
#include "CoreMinimal.h"
#include "ConversationTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortConversationParamLibrary.generated.h"

UCLASS(Blueprintable)
class UFortConversationParamLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortConversationParamLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ExtractConversationParameterValue(const TArray<FConversationNodeParameterPair>& ConversationParameters, const FString& DesiredParameterName, FString& ParameterValueOut);
    
};

