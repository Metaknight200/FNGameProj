#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "Types/SlateEnums.h"
#include "FortReplayGoToTimeDialogue.generated.h"

class UCommonButtonLegacy;
class UEditableText;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortReplayGoToTimeDialogue : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_GoToSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_HowTo;
    
public:
    UFortReplayGoToTimeDialogue();

private:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void HandleReplayTimelineChanged(float StartTime, float EndTime);
    
};

