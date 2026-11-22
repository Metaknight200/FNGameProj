#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "Types/SlateEnums.h"
#include "Templates/SubclassOf.h"
#include "FortSignInWidget.generated.h"

class UCommonBorder;
class UCommonBorderStyle;
class UCommonButtonLegacy;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSignInWidget : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBorderStyle> NormalBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBorderStyle> HighlightBorderStyle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ForgotPasswordURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditText_Email;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditText_Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_Email;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SignIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ForgotPassword;
    
public:
    UFortSignInWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSignInButton(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void StartSignIn();
    
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};

