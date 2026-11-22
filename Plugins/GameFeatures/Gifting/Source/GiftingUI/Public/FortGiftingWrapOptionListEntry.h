#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortGiftingWrapOptionListEntry.generated.h"

class UCommonLazyImage;
class UFortGiftBoxItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGiftingWrapOptionListEntry : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItemDefinition* GiftBoxDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_Gift;
    
public:
    UFortGiftingWrapOptionListEntry();


    // Fix for true pure virtual functions not being implemented
};

