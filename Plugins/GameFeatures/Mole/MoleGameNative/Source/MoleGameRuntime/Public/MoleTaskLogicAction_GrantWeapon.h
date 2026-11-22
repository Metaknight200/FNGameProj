#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoleTaskLogicAction.h"
#include "MoleTaskLogicAction_GrantWeapon.generated.h"

class UFortWeaponItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicAction_GrantWeapon : public UMoleTaskLogicAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponItemDefinition> WeaponToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GrantedWeaponGuid;
    
public:
    UMoleTaskLogicAction_GrantWeapon();

};

