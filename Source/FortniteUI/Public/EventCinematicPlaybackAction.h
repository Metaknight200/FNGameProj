#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortScriptedAction.h"
#include "EventCinematicPlaybackAction.generated.h"

class AFortPlayerController;
class UFortQuestItem;

UCLASS(Blueprintable)
class AEventCinematicPlaybackAction : public AFortScriptedAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestItem* Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ObjectiveStat;
    
public:
    AEventCinematicPlaybackAction(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleVideoEnded();
    
};

