#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAbilitySetHandle.h"
#include "MoleTaskLogicAction.h"
#include "MoleTaskLogicAction_GrantAbilitySet.generated.h"

class UFortAbilitySet;

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicAction_GrantAbilitySet : public UMoleTaskLogicAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> AbilitySetToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAbilitySetHandle GrantedHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GrantedInputGuid;
    
public:
    UMoleTaskLogicAction_GrantAbilitySet();

};

