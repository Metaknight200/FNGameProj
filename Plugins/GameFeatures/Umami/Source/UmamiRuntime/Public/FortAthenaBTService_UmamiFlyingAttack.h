#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FortAthenaBTService_UmamiFlyingAttack.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_UmamiFlyingAttack : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlyingAttackExecutionStatusKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SuccessPendingKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponFireName;
    
public:
    UFortAthenaBTService_UmamiFlyingAttack();

};

