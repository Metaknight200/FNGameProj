#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_AddAttributeDefaults.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGameFeatureAction_AddAttributeDefaults : public UGameFeatureAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> AttribDefaultTableNames;
    
    UGameFeatureAction_AddAttributeDefaults();

};

