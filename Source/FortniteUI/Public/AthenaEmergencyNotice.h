#pragma once
#include "CoreMinimal.h"
#include "AthenaEmergencyNotice.generated.h"

USTRUCT(BlueprintType)
struct FAthenaEmergencyNotice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Body;
    
    FORTNITEUI_API FAthenaEmergencyNotice();
};

