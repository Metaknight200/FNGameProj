#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_KiwiRelevancy.generated.h"

UCLASS(Blueprintable)
class KIWIPLAYLISTRUNTIME_API UFortCheatManager_KiwiRelevancy : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_KiwiRelevancy();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void KiwiStartKevinRoomZapping(const float ZapInterval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void KiwiExplodePlayers();
    
};

