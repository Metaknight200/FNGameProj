#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "FriendChestAnalyticsParticipant.h"
#include "FriendChestAnalytics.generated.h"

UCLASS(Blueprintable)
class UFriendChestAnalytics : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnCoordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendChestAnalyticsParticipant> Participants;
    
public:
    UFriendChestAnalytics();

};

