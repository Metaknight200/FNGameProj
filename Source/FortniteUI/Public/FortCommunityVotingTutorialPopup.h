#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "FortCommunityVotingTutorialPopup.generated.h"

class UCommonButtonLegacy;
class UCommonWidgetSwitcherLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingTutorialPopup : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ButtonNextInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ButtonCloseInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_NextStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Buttons_Switcher;
    
public:
    UFortCommunityVotingTutorialPopup();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTutorialAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutSlideAnimation(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInSlideAnimation(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnSlideAnimationFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseTutorial();
    
};

