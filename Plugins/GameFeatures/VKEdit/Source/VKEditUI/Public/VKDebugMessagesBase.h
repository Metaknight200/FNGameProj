#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "VKDebugMessagesBase.generated.h"

class AFortGameState;

UCLASS(Blueprintable, EditInlineNew)
class UVKDebugMessagesBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UVKDebugMessagesBase();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleGameStateInitialized(AFortGameState* GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameStateInitialized(AFortGameState* GameState);
    
};

