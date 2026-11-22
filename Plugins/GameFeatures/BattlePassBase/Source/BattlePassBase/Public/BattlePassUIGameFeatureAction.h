#pragma once
#include "CoreMinimal.h"
#include "FortUIGameFeatureAction.h"
#include "BattlePassUIGameFeatureAction.generated.h"

class UBattlePassScreenBase;
class UCommonActivatableWidget;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBattlePassUIGameFeatureAction : public UFortUIGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattlePassScreenBase> BattlePassScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> BatlePassInformationModalClass;
    
public:
    UBattlePassUIGameFeatureAction();

};

