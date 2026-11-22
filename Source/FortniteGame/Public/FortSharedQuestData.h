#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SharedQuestBucketData.h"
#include "FortSharedQuestData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UFortSharedQuestData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSharedQuestBucketData> Buckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SharedQuestsTable;
    
    UFortSharedQuestData();

};

