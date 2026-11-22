#pragma once
#include "CoreMinimal.h"
#include "CurieElementPairKey.generated.h"

USTRUCT(BlueprintType)
struct FCurieElementPairKey {
    GENERATED_BODY()
public:
    CURIE_API FCurieElementPairKey();
};
FORCEINLINE uint32 GetTypeHash(const FCurieElementPairKey) { return 0; }

