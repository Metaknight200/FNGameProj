#pragma once
#include "CoreMinimal.h"
#include "EFortActivityValidationResult.h"
#include "Types/SlateEnums.h"
#include "FortCreativeIslandSelectTab.h"
#include "FortCreativeIslandSelectCodeTab.generated.h"

class UCommonButtonBase;
class UEditableText;
class UFortCreativeIslandDetailsPanel;
class UFortGameActivity;
class UFortGameActivityProvider;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandSelectCodeTab : public UFortCreativeIslandSelectTab {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_IslandLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeIslandDetailsPanel* IslandDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Favorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_LaunchError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameActivityProvider* ActivityProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameActivity* LastActivityQueried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameActivity* UserEnteredActivity;
    
public:
    UFortCreativeIslandSelectCodeTab();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivityValidatedWithEmptyIslandLink();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivityValidated(const EFortActivityValidationResult ValidateResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivityClear();
    
    UFUNCTION(BlueprintCallable)
    void HandleActivityCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleActivityChanged(const FText& Text);
    
};

