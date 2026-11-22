#pragma once
#include "CoreMinimal.h"
#include "MoleActiveTaskStateHandle.generated.h"

USTRUCT(BlueprintType)
struct FMoleActiveTaskStateHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    MOLEGAMERUNTIME_API FMoleActiveTaskStateHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMoleActiveTaskStateHandle) { return 0; }

