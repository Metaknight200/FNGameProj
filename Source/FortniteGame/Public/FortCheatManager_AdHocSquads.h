#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_AdHocSquads.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_AdHocSquads : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_AdHocSquads();

    UFUNCTION(BlueprintCallable, Exec)
    void AdHocSquadsToggleVoiceChatSquadding();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdHocSquadsDebugResetPlayerSquad();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdHocSquadsDebugAssignPlayerToSquad(const int32 SquadIndex);
    
};

