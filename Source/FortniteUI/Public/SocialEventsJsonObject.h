#pragma once
#include "CoreMinimal.h"
#include "SocialEventJSON.h"
#include "SocialEventsJsonObject.generated.h"

USTRUCT(BlueprintType)
struct FSocialEventsJsonObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSocialEventJSON> Events;
    
    FORTNITEUI_API FSocialEventsJsonObject();
};

