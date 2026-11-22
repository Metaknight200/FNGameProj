#pragma once
#include "CoreMinimal.h"
#include "MoleTaskLogicSubobject.h"
#include "MoleTaskLogicAction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleTaskLogicAction : public UMoleTaskLogicSubobject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ActionRemovalPolicyBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesActionRemovalPolicyBitmask: 1;
    
public:
    UMoleTaskLogicAction();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActionRemovalPolicyInvoked();
    
};

