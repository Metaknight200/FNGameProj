#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Types/SlateEnums.h"
#include "FortReplayBrowserRenameDialog.generated.h"

class UCommonButtonLegacy;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReplayBrowserRenameDialog : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxReplayNameLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* TextBox_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Decline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_TapToClose;
    
public:
    UFortReplayBrowserRenameDialog();

private:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleTextChanged(const FText& Text);
    
};

