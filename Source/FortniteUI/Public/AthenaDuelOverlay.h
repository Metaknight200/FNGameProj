#pragma once
#include "CoreMinimal.h"
#include "DuelOverlayData.h"
#include "EDuelState.h"
#include "FortColorPalette.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaDuelOverlay.generated.h"

class UCommonRichTextBlock;
class UImage;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaDuelOverlay : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_SubTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ChallengedNPCPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ElimPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> DuelStartedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizedWidgetData;
    
public:
    UAthenaDuelOverlay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupForActivation(const EDuelState DuelState, const FFortColorPalette& RarityColorPalette);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutroOverlay();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDuelUpdate(const EDuelState DuelState, const FDuelOverlayData& DuelOverlayData);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

