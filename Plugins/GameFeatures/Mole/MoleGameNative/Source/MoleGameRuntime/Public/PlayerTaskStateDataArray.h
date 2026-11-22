#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PlayerTaskStateData.h"
#include "PlayerTaskStateDataArray.generated.h"

class UMoleTaskLinkComponent;

USTRUCT(BlueprintType)
struct FPlayerTaskStateDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UMoleTaskLinkComponent* CachedTaskComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerTaskStateData> TaskStateArray;
    
public:
    MOLEGAMERUNTIME_API FPlayerTaskStateDataArray();
};

