#pragma once
#include "CoreMinimal.h"
#include "FortAudioShapeComponent.h"
#include "OnAudioShapeInsideStateChangedDelegate.h"
#include "FortAudioShapePrimitiveComponent.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAudioShapePrimitiveComponent : public UFortAudioShapeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundOnEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundOnInside;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioShapeInsideStateChanged OnInsideStateChanged;
    
    UFortAudioShapePrimitiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayerInside() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetInsideAudioComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetEdgeAudioComponent();
    
};

