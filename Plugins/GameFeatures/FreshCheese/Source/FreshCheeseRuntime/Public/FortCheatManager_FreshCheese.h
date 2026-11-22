#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManager_FreshCheese.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_FreshCheese : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCheatManager_FreshCheese();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnFriendChests();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void FreshCheeseInstancedLoot(const FName TierGroup, int32 NumFriends);
    
};

