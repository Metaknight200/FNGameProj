#pragma once
#include "CoreMinimal.h"
#include "CheatMenuSection.h"
#include "FortSettingRegistry.h"
#include "FortGameCheatsRegistry.generated.h"

UCLASS(Blueprintable, Config=CheatsRegistry)
class UFortGameCheatsRegistry : public UFortSettingRegistry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheatMenuSection> SeasonalSections;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheatMenuSection> AdminSections;
    
public:
    UFortGameCheatsRegistry();

};

