#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PropGunFunctionLibrary.generated.h"

class AFortPawn;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UPropGunFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPropGunFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void UpdatePropPreviewPosition(USceneComponent* PropPreviewComponent, const float DeltaTime, const AFortPawn* AttachPawn, const FName AttachSocket, const USkeletalMeshComponent* WeaponMesh, const FVector& DesiredRelativeTransform, const float MinimumZOffset, const FRotator& RelativeRotation, const FVector& CachedScale, const float InterpSpeed);
    
};

