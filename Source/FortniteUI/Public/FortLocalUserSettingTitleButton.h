#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortLocalUserSettingTitleButton.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLocalUserSettingTitleButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Title;
    
public:
    UFortLocalUserSettingTitleButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExpansionChanged(bool bIsExpanded);
    
};

