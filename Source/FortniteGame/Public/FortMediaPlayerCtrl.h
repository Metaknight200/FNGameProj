#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MediaPlayerOptions.h"
#include "FortMediaPlayerCtrl.generated.h"

class UFortStreamMediaSource;
class UMediaPlayer;
class UMediaSource;

UCLASS(Blueprintable, MinimalAPI)
class UFortMediaPlayerCtrl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialBufferDurationInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentBufferDurationInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan MaxSyncedOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeOffsetSmoothingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxConsecutiveDesyncedFrames;
    
    UFortMediaPlayerCtrl();

    UFUNCTION(BlueprintCallable)
    void SetPlayerStartTime(float InRequestSentTime);
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSourceWithOptions(UMediaSource* InMediaSource, const FMediaPlayerOptions& InOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerStateIsPreparing() const;
    
};

