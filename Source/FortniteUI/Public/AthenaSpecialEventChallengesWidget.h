#pragma once
#include "CoreMinimal.h"
#include "UrgentQuestData.h"
#include "GameplayTagContainer.h"
#include "AthenaChallengesWidget.h"
#include "AthenaSpecialEventChallengesWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpecialEventChallengesWidget : public UAthenaChallengesWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UrgentQuestMessagingStartBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* AttachedPlayerState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUrgentQuestData> ActiveUrgentQuestDataArray;
    
public:
    UAthenaSpecialEventChallengesWidget();

private:
    UFUNCTION(BlueprintCallable)
    void HandleUrgentQuestStarted(const FUrgentQuestData& InUrgentQuestData, const float EventTimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleUrgentQuestEnded(const FGameplayTag& EventTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleClearAllUrgentQuestEntries();
    
};

