#pragma once
#include "CoreMinimal.h"
#include "AthenaRadioStation.generated.h"

USTRUCT(BlueprintType)
struct FAthenaRadioStation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StationImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourceID;
    
    SRIRACHARANCH_API FAthenaRadioStation();
};

