#pragma once
#include "CoreMinimal.h"
#include "CurieElementInteractWithMaterialHandler.h"
#include "ScalableFloat.h"
#include "FortCurieInteractStateSuggestionData.h"
#include "FortCurieElementInteractWithMaterialHandler.generated.h"

UCLASS(Blueprintable)
class UFortCurieElementInteractWithMaterialHandler : public UCurieElementInteractWithMaterialHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InteractMagnitudeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSuggestElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisableElementDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCurieInteractStateSuggestionData> OnInstantInteractionStateSuggestions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCurieInteractStateSuggestionData> OnBeginInteractionStateSuggestions;
    
public:
    UFortCurieElementInteractWithMaterialHandler();

};

