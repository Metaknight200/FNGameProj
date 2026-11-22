#pragma once
#include "CoreMinimal.h"
#include "FortProgressModal.h"
#include "FortControllerDisconnectedModal.generated.h"

class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortControllerDisconnectedModal : public UFortProgressModal {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_SwitchUser;
    
public:
    UFortControllerDisconnectedModal();

};

