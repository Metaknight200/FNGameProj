#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotDigestedSkillSet.h"
#include "FortBotDigestedHealingItemsList.h"
#include "FortBotDigestedHealingItemsSpec.h"
#include "FortAthenaAIBotHealingDigestedSkillSet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIBotHealingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortBotDigestedHealingItemsList HealthItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortBotDigestedHealingItemsSpec> HealthItemsSpecializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortBotDigestedHealingItemsList ShieldItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortBotDigestedHealingItemsSpec> ShieldItemsSpecializations;
    
public:
    UFortAthenaAIBotHealingDigestedSkillSet();

};

