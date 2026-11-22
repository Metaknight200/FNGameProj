#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FortAthenaBTService_FlyingDestroyBlocker.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_FlyingDestroyBlocker : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestroyBlockerExecutionStatusKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestroyBlockerTargetKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponFireStatusKeyName;
    
public:
    UFortAthenaBTService_FlyingDestroyBlocker();

};

