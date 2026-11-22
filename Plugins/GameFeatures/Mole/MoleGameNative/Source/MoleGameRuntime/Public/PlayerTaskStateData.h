#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PlayerTaskStateData.generated.h"

class AController;

USTRUCT(BlueprintType)
struct FPlayerTaskStateData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChangeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* UserController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TaskInteractionInfoRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasPermission: 1;
    
    MOLEGAMERUNTIME_API FPlayerTaskStateData();
};

