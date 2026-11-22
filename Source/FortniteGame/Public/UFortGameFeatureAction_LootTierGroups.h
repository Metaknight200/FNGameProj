#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "UFortGameFeatureAction_LootTierGroups.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UUFortGameFeatureAction_LootTierGroups : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SupportedAthenaLootTierGroups;
    
public:
    UUFortGameFeatureAction_LootTierGroups();

};

