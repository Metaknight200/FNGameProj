#pragma once
#include "CoreMinimal.h"
#include "MoleRoleAssignedMessagePayload.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FMoleRoleAssignedMessagePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsImpostor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* LocalPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerState*> TeamPlayerStates;
    
    MOLEGAMERUNTIME_API FMoleRoleAssignedMessagePayload();
};

