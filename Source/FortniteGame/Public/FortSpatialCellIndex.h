#pragma once
#include "CoreMinimal.h"
#include "FortSpatialCellIndex.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortSpatialCellIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    FFortSpatialCellIndex();
    friend uint32 GetTypeHash(const FFortSpatialCellIndex& Value) { return HashCombine(HashCombine(::GetTypeHash(Value.X), ::GetTypeHash(Value.Y)), ::GetTypeHash(Value.Z)); }
};

