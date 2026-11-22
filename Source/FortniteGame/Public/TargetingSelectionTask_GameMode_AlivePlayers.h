#pragma once
#include "CoreMinimal.h"
#include "TargetingTask.h"
#include "TargetingSelectionTask_GameMode_AlivePlayers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetingSelectionTask_GameMode_AlivePlayers : public UTargetingTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAddPlayerBots: 1;
    
public:
    UTargetingSelectionTask_GameMode_AlivePlayers();

};

