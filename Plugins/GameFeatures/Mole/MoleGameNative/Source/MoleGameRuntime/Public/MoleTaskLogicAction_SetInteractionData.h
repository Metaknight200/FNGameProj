#pragma once
#include "CoreMinimal.h"
#include "MoleTaskLogicAction.h"
#include "MoleTaskLogicAction_SetInteractionData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicAction_SetInteractionData : public UMoleTaskLogicAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteractionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlsoGrantPermission: 1;
    
public:
    UMoleTaskLogicAction_SetInteractionData();

};

