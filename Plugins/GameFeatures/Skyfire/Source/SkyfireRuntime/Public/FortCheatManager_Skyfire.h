#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Skyfire.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Skyfire : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Skyfire();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SkyfireSpawnTimeOrb();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SkyfireSpawnLootOrb();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SkyfireSetTimeBeforeLootRoomTeleport(const float TimeInSeconds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SkyfireSetLootRoomTime(const EFortRarity LootRoomRarity, const float TimeInSeconds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SkyfireSetLootRarityEarned(const uint8 LootRarity);
    
};

