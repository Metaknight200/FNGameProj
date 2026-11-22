#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortUIGameFeatureAction.h"
#include "FortUIGameFeatureAction_AddWidgetAlias.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortUIGameFeatureAction_AddWidgetAlias : public UFortUIGameFeatureAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<UUserWidget>> WidgetAliases;
    
    UFortUIGameFeatureAction_AddWidgetAlias();

};

