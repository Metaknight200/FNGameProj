#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortRadialSlot.h"
#include "MoleQuickChatRadialSlot.generated.h"

class UCommonRichTextBlock;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleQuickChatRadialSlot : public UFortRadialSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CategoryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CategoryImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Main;
    
public:
    UMoleQuickChatRadialSlot();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdated();
    
};

