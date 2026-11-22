#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardResult.h"
#include "FortQuestManagerComponent.h"
#include "FortQuestManagerComponent_Athena.generated.h"

class UFortMcpProfileSubgame;

UCLASS(Blueprintable, MinimalAPI)
class UFortQuestManagerComponent_Athena : public UFortQuestManagerComponent {
    GENERATED_BODY()
public:
    UFortQuestManagerComponent_Athena();

private:
    UFUNCTION(BlueprintCallable)
    void HandleProfileInitialized(UFortMcpProfileSubgame* McpProfile);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchRewardNotification(const FAthenaRewardResult& MatchRewardData);
    
    UFUNCTION(BlueprintCallable)
    void HandleInitQuests_Prepare(const bool bFromMcp, const bool bFromUpdate);
    
};

