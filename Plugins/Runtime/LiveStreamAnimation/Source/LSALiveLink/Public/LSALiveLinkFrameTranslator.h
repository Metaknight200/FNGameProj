#pragma once
#include "CoreMinimal.h"
#include "LiveLinkFrameTranslator.h"
#include "LiveStreamAnimationHandleWrapper.h"
#include "LSALiveLinkTranslationProfile.h"
#include "LSALiveLinkFrameTranslator.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class LSALIVELINK_API ULSALiveLinkFrameTranslator : public ULiveLinkFrameTranslator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FLiveStreamAnimationHandleWrapper, FLSALiveLinkTranslationProfile> TranslationProfiles;
    
public:
    ULSALiveLinkFrameTranslator();

};

