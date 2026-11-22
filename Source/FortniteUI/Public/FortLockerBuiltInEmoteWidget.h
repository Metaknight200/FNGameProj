#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortLockerBuiltInEmoteWidget.generated.h"

class UFortCosmeticItemCard;
class UFortMontageItemDefinitionBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortLockerBuiltInEmoteWidget : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* Card_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMontageItemDefinitionBase* EmoteDefinition;
    
public:
    UFortLockerBuiltInEmoteWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateLocked(bool bLocked);
    
};

