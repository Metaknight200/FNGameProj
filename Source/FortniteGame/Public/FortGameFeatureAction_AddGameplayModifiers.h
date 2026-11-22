#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "FortGameFeatureAction_AddGameplayModifiers.generated.h"

class UFortGameplayModifierItemDefinition;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortGameFeatureAction_AddGameplayModifiers : public UGameFeatureAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayModifierItemDefinition*> GameplayModifiers;
    
public:
    UFortGameFeatureAction_AddGameplayModifiers();

};

