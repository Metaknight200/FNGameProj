#pragma once
#include "CoreMinimal.h"
#include "SocialEventsJsonObject.h"
#include "SocialEventsSource.generated.h"

USTRUCT(BlueprintType)
struct FSocialEventsSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString __locale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialEventsJsonObject SocialEvents;
    
    FORTNITEUI_API FSocialEventsSource();
};

