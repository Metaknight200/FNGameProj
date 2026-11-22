#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortLoadingVideoPlayer.generated.h"

class UFileMediaSource;
class UFortStreamMediaSource;
class UMediaPlayer;
class UMediaSoundComponent;
class UMediaTexture;

UCLASS(Blueprintable)
class UFortLoadingVideoPlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* VideoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* VideoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* FileMediaSource;
    
public:
    UFortLoadingVideoPlayer();

private:
    UFUNCTION(BlueprintCallable)
    void RequestSuccess(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void RequestFailure(const FString& URL);
    
public:
    UFUNCTION(BlueprintCallable)
    UMediaTexture* GetMediaTexture();
    
    UFUNCTION(BlueprintCallable)
    UMediaPlayer* GetMediaPlayer();
    
};

