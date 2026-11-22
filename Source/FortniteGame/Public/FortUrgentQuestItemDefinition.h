#pragma once
#include "CoreMinimal.h"
#include "FortQuestItemDefinition.h"
#include "UrgentQuestData.h"
#include "FortUrgentQuestItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortUrgentQuestItemDefinition : public UFortQuestItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUrgentQuestData UrgentQuestData;
    
public:
    UFortUrgentQuestItemDefinition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUrgentQuestData GetUrgentQuestData() const;
    
};

