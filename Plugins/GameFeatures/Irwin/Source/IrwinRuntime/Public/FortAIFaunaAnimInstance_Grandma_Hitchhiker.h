#pragma once
#include "CoreMinimal.h"
#include "FortAIFaunaAnimInstance_Grandma.h"
#include "FortAIFaunaAnimInstance_Grandma_Hitchhiker.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAIFaunaAnimInstance_Grandma_Hitchhiker : public UFortAIFaunaAnimInstance_Grandma {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHitchhiked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGrandmaSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInTractorBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintCheckSpeed;
    
    UFortAIFaunaAnimInstance_Grandma_Hitchhiker();

};

