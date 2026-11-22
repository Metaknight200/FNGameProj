#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "MinigameActivityEndedData.h"
#include "MinigameActivityStartedData.h"
#include "ScalableFloat.h"
#include "CreativeMinigameProgressWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UCreativeMinigameProgressWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> CurrentPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinigameActive;
    
public:
    UCreativeMinigameProgressWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStatUpdate(const int32 CurrentPlayerTeamScore, const int32 CurrentPlayerTeamPlacement, const int32 GoalScore, const TArray<int32>& SortedTeamStats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerScoringUpdate(const int32 CurrentPlayerTeamScore, const int32 PreviousPlayerTeamScore, const int32 CurrentPlayerTeamPlacement, const int32 PreviousPlayerTeamPlacement, const int32 GoalScore, const TArray<int32>& SortedTeamScores);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleMinigameStarted(const FMinigameActivityStartedData& StartData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleMinigameEnded(const FMinigameActivityEndedData& EndData);
    
};

