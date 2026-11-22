#pragma once
#include "CoreMinimal.h"
#include "FortAIFaunaAnimInstance_Burt.h"
#include "FortAIFaunaAnimInstance_Burt_Hitchhiker.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAIFaunaAnimInstance_Burt_Hitchhiker : public UFortAIFaunaAnimInstance_Burt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInTractorBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsHitchhiked;
    
    UFortAIFaunaAnimInstance_Burt_Hitchhiker();

};

