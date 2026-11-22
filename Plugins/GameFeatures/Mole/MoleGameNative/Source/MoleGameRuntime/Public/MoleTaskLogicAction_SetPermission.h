#pragma once
#include "CoreMinimal.h"
#include "MoleTaskLogicAction.h"
#include "MoleTaskLogicAction_SetPermission.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicAction_SetPermission : public UMoleTaskLogicAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGrantPermission: 1;
    
public:
    UMoleTaskLogicAction_SetPermission();

};

