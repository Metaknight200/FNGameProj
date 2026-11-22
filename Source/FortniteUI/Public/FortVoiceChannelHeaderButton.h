#pragma once
#include "CoreMinimal.h"
#include "SocialListEntryBase.h"
#include "FortVoiceChannelHeaderButton.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVoiceChannelHeaderButton : public USocialListEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_ChannelTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_ChannelInfo;
    
public:
    UFortVoiceChannelHeaderButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveChannel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJoinChannel() const;
    
};

