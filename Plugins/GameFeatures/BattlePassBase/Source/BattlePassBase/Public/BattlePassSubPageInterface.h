#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BattlePassSubPageInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPASSBASE_API UBattlePassSubPageInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPASSBASE_API IBattlePassSubPageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterSubPage();
    
};

