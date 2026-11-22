#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "MovieWidgetMediaPreEndDelegate.h"
#include "MovieWidgetMediaStartedDelegate.h"
#include "VideoWidgetConfig.h"
#include "FortActivatableMovieWidget.generated.h"

class UBorder;
class UCommonButtonLegacy;
class UFortMediaSubtitlesPlayer;
class UImage;
class ULocalizedOverlays;
class UMediaPlayer;
class UMediaSoundComponent;
class USoundClass;
class USoundMix;
class USoundSubmixBase;
class USubtitleDisplay;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortActivatableMovieWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwriteSkip;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PressToSkipAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle HoldToSkipAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_White;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* VideoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMediaSubtitlesPlayer* SubtitlePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalizedOverlays* SubtitleOverlays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastInteractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bControlsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_VideoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VideoTextureColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitleDisplay* Subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Throbber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* SafeZonePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SafeZoneColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* ActiveSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmixBase* DefaultSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmixBase* LicensedSubmix;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieWidgetMediaPreEnd MediaPreEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieWidgetMediaStarted MediaStartedEvent;
    
public:
    UFortActivatableMovieWidget();

private:
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnUrlSuccess(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnUrlFailure(const FString& URL);
    
public:
    UFUNCTION(BlueprintCallable)
    void Stop(bool InForceClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeFromWhite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAutoPlayVideo(FName AssetName, bool bAllowRecord) const;
    
    UFUNCTION(BlueprintCallable)
    void SetMediaPreEndTimeSeconds(float InSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioDisable(bool bInDisable);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void LoadStreamingVideo(const FVideoWidgetConfig& Config);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableFadeInFromWhite(bool bInEnable);
    
};

