#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaItemReceivedPreMessageBase.generated.h"

class UFortGiftBoxItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemReceivedPreMessageBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* GiftBox;
    
public:
    UAthenaItemReceivedPreMessageBase();

};

