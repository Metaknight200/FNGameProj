#pragma once
#include "CoreMinimal.h"
#include "LiveStreamAnimationDataHandler.h"
#include "LiveStreamAnimationHandleWrapper.h"
#include "LSALiveLinkSourceOptions.h"
#include "LSALiveLinkDataHandler.generated.h"

UCLASS(Blueprintable, NonTransient)
class LSALIVELINK_API ULSALiveLinkDataHandler : public ULiveStreamAnimationDataHandler {
    GENERATED_BODY()
public:
    ULSALiveLinkDataHandler();

    UFUNCTION(BlueprintCallable)
    void StopTrackingLiveLinkSubject(const FLiveStreamAnimationHandleWrapper RegisteredName);
    
    UFUNCTION(BlueprintCallable)
    bool StartTrackingLiveLinkSubject(const FName LiveLinkSubject, const FLiveStreamAnimationHandleWrapper RegisteredName, const FLSALiveLinkSourceOptions Options, const FLiveStreamAnimationHandleWrapper TranslationProfile);
    
};

