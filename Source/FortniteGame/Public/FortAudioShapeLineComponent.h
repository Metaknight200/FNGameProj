#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAudioShapePrimitiveComponent.h"
#include "FortAudioShapeLineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAudioShapeLineComponent : public UFortAudioShapePrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndPoint;
    
    UFortAudioShapeLineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStartPoint(const FVector& InStartPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetEndPoint(const FVector& InEndPoint);
    
};

