#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortPotContentsTile.generated.h"

class UCommonLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPotContentsTile : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_Item;
    
public:
    UFortPotContentsTile();


    // Fix for true pure virtual functions not being implemented
};

