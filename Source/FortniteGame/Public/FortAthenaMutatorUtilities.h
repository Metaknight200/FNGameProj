#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "FortAthenaMutatorUtilities.generated.h"

class AFortPlayerStateAthena;
class UMaterialInstanceDynamic;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaMutatorUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortAthenaMutatorUtilities();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceForParachuteLandingGeometry(FHitResult& OutHit, const UObject* WorldContextObject, const FVector& InLocation, float TraceStartZ, float TraceEndZ, float TraceSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerPortraitInMaterial(const AFortPlayerStateAthena* Player, UMaterialInstanceDynamic* Material, FName MaterialParam);
    
};

