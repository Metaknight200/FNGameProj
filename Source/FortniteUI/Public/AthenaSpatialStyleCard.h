#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "AthenaSpatialStyleCard.generated.h"

class UFortCosmeticItemCard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialStyleCard : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* ItemCard_Style;
    
public:
    UAthenaSpatialStyleCard();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStyleImageSet(bool bUnlocked);
    
};

