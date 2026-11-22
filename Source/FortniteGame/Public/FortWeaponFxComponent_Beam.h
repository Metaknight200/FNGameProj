#pragma once
#include "CoreMinimal.h"
#include "FortWeaponFxComponent.h"
#include "FortWeaponFxComponent_Beam.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortWeaponFxComponent_Beam : public UFortWeaponFxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachBeamToMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBeamSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnImpactFXAtInterpedBeamEndpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactFxPerSecond;
    
public:
    UFortWeaponFxComponent_Beam(const FObjectInitializer& ObjectInitializer);

};

