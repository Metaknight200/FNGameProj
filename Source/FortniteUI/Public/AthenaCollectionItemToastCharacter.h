#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionItemToast.h"
#include "AthenaCollectionItemToastCharacter.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionItemToastCharacter : public UAthenaCollectionItemToast {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NumLocationsFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_NumLocations;
    
public:
    UAthenaCollectionItemToastCharacter();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLocationsSet(int32 NumFound, int32 NumLocations);
    
};

