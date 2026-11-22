#pragma once
#include "CoreMinimal.h"
#include "VehicleAttachment.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FVehicleAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    VALETRUNTIME_API FVehicleAttachment();
};

