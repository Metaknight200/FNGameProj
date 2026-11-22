#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "LTMWidgetBase.h"
#include "TeamPlacementWidget.generated.h"

class AFortAthenaMutator_TeamPlacement;
class AFortPlayerStateAthena;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UTeamPlacementWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_TeamPlacement> TeamPlacementMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> CurrentPlayerState;
    
public:
    UTeamPlacementWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerScoringUpdate(const int32 CurrentPlayerTeamScore, const int32 PreviousPlayerTeamScore, const int32 CurrentPlayerTeamPlacement, const int32 PreviousPlayerTeamPlacement, const int32 GoalScore, const TArray<int32>& SortedTeamScores);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
};

