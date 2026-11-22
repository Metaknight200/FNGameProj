#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoleTaskLogicAction.h"
#include "MoleTaskLogicAction_GrantItem.generated.h"

class UFortWorldItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicAction_GrantItem : public UMoleTaskLogicAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> ItemToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GrantedItemGuid;
    
public:
    UMoleTaskLogicAction_GrantItem();

};

