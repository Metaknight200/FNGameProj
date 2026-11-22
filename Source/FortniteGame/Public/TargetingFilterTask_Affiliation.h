#pragma once
#include "CoreMinimal.h"
#include "TargetingFilterTask_BasicFilterTemplate.h"
#include "EFortTeamAffiliation.h"
#include "TargetingFilterTask_Affiliation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetingFilterTask_Affiliation : public UTargetingFilterTask_BasicFilterTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortTeamAffiliation::Type> AffiliationType;
    
public:
    UTargetingFilterTask_Affiliation();

};

