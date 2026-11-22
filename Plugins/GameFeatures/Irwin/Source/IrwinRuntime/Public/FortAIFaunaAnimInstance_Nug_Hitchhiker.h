#pragma once
#include "CoreMinimal.h"
#include "FortAIFaunaAnimInstance_Nug.h"
#include "FortAIFaunaAnimInstance_Nug_Hitchhiker.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAIFaunaAnimInstance_Nug_Hitchhiker : public UFortAIFaunaAnimInstance_Nug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInTractorBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHitchhiked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanTransitionIsBeingHeldToChickenChuck;
    
    UFortAIFaunaAnimInstance_Nug_Hitchhiker();

};

