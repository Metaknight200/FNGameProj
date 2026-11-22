#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SocialEventJSON.generated.h"

USTRUCT(BlueprintType)
struct FSocialEventJSON {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 event_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime starts_at_utc;
    
    FORTNITEUI_API FSocialEventJSON();
};

