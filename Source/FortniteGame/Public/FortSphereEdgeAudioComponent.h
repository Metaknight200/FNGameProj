#pragma once
#include "CoreMinimal.h"
#include "FortAudioShapePrimitiveComponent.h"
#include "OnSphereEdgeAudioComponentInsideStateChangedDelegate.h"
#include "FortSphereEdgeAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSphereEdgeAudioComponent : public UFortAudioShapePrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSphereEdgeAudioComponentInsideStateChanged OnInsideSphereStateChanged;
    
    UFortSphereEdgeAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
};

