#pragma once
#include "CoreMinimal.h"
#include "EInteractionRange.h"
#include "FortConversationMarkerInterface.h"
#include "FortActorIndicatorWidget.h"
#include "FortConversationMarker.generated.h"

class AActor;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UFortConversationMessageWidget;
class UFortKeybindWidget;
class UImage;
class UTexture2D;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConversationMarker : public UFortActorIndicatorWidget, public IFortConversationMarkerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ManualMarkerZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MessageBubbleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTextBubbleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_PreviewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortConversationMessageWidget* ConversationMessage_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ParticipantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Keybind_Nameplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NPCIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CustomDialogMarkerIndicatorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultDialogMarkerIndicatorIcon;
    
public:
    UFortConversationMarker();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIndicatedActor(AActor* NewIndicatorActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageShownOverActor(AActor* OverActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionRangeChanged(EInteractionRange TargetInteractionRange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanInteract(bool bCanInteract);
    

    // Fix for true pure virtual functions not being implemented
};

