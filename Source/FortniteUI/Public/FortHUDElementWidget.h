#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HighlightableInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Components/SlateWrapperTypes.h"
#include "FortHUDElementWidget.generated.h"

class UTutorialHighlight;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortHUDElementWidget : public UCommonUserWidget, public IHighlightableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDElementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility HiddenVisibility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTutorialHighlight* TutorialHighlight;
    
public:
    UFortHUDElementWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibilitySetEvent(ESlateVisibility InVisibility);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyTags(const FGameplayTagContainer& InTags) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags);
    
public:
    UFUNCTION(BlueprintCallable)
    void AppendHUDElementTags(const FGameplayTagContainer& AdditionalTags);
    

    // Fix for true pure virtual functions not being implemented
};

