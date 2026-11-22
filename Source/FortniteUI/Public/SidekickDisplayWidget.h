#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESidekickVoiceChatAudioStatus.h"
#include "ESidekickVoiceChatVideoContentType.h"
#include "ESidekickVoiceChatVideoStatus.h"
#include "Templates/SubclassOf.h"
#include "SidekickDisplayWidget.generated.h"

class UBorder;
class UCommonTextBlock;
class UImage;
class UMediaPlayer;
class UMediaTexture;
class UObject;
class UOverlay;
class USidekickReactionWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class USidekickDisplayWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USidekickReactionWidget> ReactionWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DisplayArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SidekickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Reactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* DefaultAvatar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConcurrentReactions;
    
public:
    USidekickDisplayWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVideoStatus(ESidekickVoiceChatVideoStatus VideoStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVideoPaused(bool bPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVideoContentType(ESidekickVoiceChatVideoContentType VideoContentType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTalkingStatus(bool bTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAudioStatus(ESidekickVoiceChatAudioStatus AudioStatus);
    
};

