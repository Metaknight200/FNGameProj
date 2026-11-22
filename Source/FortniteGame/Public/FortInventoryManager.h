#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortInventoryManager.generated.h"

class UVkPersistenceManager;

UCLASS(Blueprintable, Config=Engine)
class UFortInventoryManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVkPersistenceManager* PersistenceManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VkProjectId;
    
public:
    UFortInventoryManager();

};

