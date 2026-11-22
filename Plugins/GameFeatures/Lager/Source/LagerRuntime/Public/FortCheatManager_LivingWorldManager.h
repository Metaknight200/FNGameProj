#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManager_LivingWorldManager.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_LivingWorldManager : public UChildCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CheatTeleportToCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CheatLastEventDataName;
    
public:
    UFortCheatManager_LivingWorldManager();

    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerTeleportTo(const FString& EventDataName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerSpawn(const FString& EventDataName);
    
};

