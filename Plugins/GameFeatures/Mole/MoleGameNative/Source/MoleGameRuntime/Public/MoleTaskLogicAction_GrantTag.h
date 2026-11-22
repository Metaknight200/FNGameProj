#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MoleTaskLogicAction.h"
#include "MoleTaskLogicAction_GrantTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicAction_GrantTag : public UMoleTaskLogicAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToGrant;
    
public:
    UMoleTaskLogicAction_GrantTag();

};

