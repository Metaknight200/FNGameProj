#pragma once
#include "CoreMinimal.h"
#include "AthenaItemReceivedPreMessageBase.h"
#include "AthenaUpgradedPreMessage.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaUpgradedPreMessage : public UAthenaItemReceivedPreMessageBase {
    GENERATED_BODY()
public:
    UAthenaUpgradedPreMessage();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPresentationFinished();
    
};

