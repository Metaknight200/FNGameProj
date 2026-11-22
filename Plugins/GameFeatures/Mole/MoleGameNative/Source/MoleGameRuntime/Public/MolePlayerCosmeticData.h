#pragma once
#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "MolePlayerCosmeticData.generated.h"

class UAthenaBackpackItemDefinition;
class UAthenaCharacterItemDefinition;

USTRUCT(BlueprintType)
struct FMolePlayerCosmeticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* CharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> CharacterVariantChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBackpackItemDefinition* Backpack;
    
    MOLEGAMERUNTIME_API FMolePlayerCosmeticData();
};

