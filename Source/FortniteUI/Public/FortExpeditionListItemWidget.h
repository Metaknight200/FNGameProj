#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortExpeditionListItemWidget.generated.h"

class UFortExpeditionItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionListItemWidget : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortExpeditionItem> Item;
    
public:
    UFortExpeditionListItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemChanged();
    

    // Fix for true pure virtual functions not being implemented
};

