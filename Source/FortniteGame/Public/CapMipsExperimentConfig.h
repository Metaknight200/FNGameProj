#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CapMipsTextureGroup.h"
#include "CapMipsExperimentConfig.generated.h"

UCLASS(Blueprintable, Config=Game)
class UCapMipsExperimentConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCapMipsTextureGroup> TextureLODGroups;
    
public:
    UCapMipsExperimentConfig();

};

