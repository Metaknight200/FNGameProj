#pragma once
#include "CoreMinimal.h"
#include "SoundLibraryContext.h"
#include "EFortFootstepAudioType.h"
#include "EFortFootstepPosition.h"
#include "EFortFootstepSurfaceType.h"
#include "FortFoleyFootstepContext.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortFoleyFootstepContext : public USoundLibraryContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFootstepAudioType::Type> StepType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFootstepSurfaceType::Type> SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFootstepPosition::Type> RelativePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIs1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThreat;
    
    UFortFoleyFootstepContext();

};

