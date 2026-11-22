#pragma once
#include "CoreMinimal.h"
#include "FortBaseAnimInstance.h"
#include "FortBaseLayerAnimInstance.generated.h"

class UFortPlayerAnimInstance;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortBaseLayerAnimInstance : public UFortBaseAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortPlayerAnimInstance> MainAnimInstanceWeakPtr;
    
    UFortBaseLayerAnimInstance();

};

