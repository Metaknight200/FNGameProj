#pragma once
#include "CoreMinimal.h"
#include "SharedQuestBucketData.generated.h"

USTRUCT(BlueprintType)
struct FSharedQuestBucketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAutoFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Playlists;
    
    FORTNITEGAME_API FSharedQuestBucketData();
};

