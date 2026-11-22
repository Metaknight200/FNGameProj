#pragma once
#include "CoreMinimal.h"
#include "CommonButtonGroupLegacy.h"
#include "SimpleButtonGroupDelegateDelegate.h"
#include "FortCommittableButtonGroup.generated.h"

UCLASS(Blueprintable)
class UFortCommittableButtonGroup : public UCommonButtonGroupLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnButtonCommitted;
    
    UFortCommittableButtonGroup();

};

