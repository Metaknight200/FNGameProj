#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionScreenInfoOverlay.h"
#include "AthenaCollectionScreenInfoOverlayCharacter.generated.h"

class UCommonRichTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionScreenInfoOverlayCharacter : public UAthenaCollectionScreenInfoOverlay {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LocationProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NumAvailableTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_NumAvailable;
    
public:
    UAthenaCollectionScreenInfoOverlayCharacter();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLocationsFoundSet(int32 NumFound, int32 NumAvailable, bool bAllFound);
    
};

