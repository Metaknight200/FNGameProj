#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EMoleTaskLeashType.h"
#include "MoleTaskLogicAction.h"
#include "MoleTaskLogicAction_SetPlayerLeash.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicAction_SetPlayerLeash : public UMoleTaskLogicAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoleTaskLeashType LeashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LeashDistance;
    
public:
    UMoleTaskLogicAction_SetPlayerLeash();

};

