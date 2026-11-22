#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ControllerComponent.h"
#include "FortCinematicState.h"
#include "FortCinematicComponent.generated.h"

class AFortPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCinematicComponent : public UControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AFortPawn>, bool> PawnVisibilityMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AFortPawn>, bool> LocalPawnVisibilityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortCinematicState> StateStack;
    
public:
    UFortCinematicComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveCinematicState(const FGameplayTag& StateId);
    
    UFUNCTION(BlueprintCallable)
    void PushCinematicState(const FFortCinematicState& InState);
    
    UFUNCTION(BlueprintCallable)
    bool IsCinematicStateActive(const FGameplayTag& StateTag);
    
    UFUNCTION(BlueprintCallable)
    void FadeToBlackscreen(float InFadeTime, bool bInHold);
    
    UFUNCTION(BlueprintCallable)
    void FadeFromBlackscreen(float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void CancelBlackscreen();
    
};

