#pragma once
#include "CoreMinimal.h"
#include "FortBaseLayerAnimInstance.h"
#include "FortAIFaunaLayerAnimInstance.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, NonTransient)
class UFortAIFaunaLayerAnimInstance : public UFortBaseLayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* MainAnimBP;
    
    UFortAIFaunaLayerAnimInstance();

};

