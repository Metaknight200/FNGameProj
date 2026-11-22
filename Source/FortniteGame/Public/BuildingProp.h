#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "BuildingTimeOfDayLights.h"
#include "FortMarkableActorInterface.h"
#include "MarkedActorDisplayInfo.h"
#include "BuildingProp.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingProp : public ABuildingTimeOfDayLights, public IFortMarkableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnalyticsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuppressSimpleInteractionWidgetForTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeMarked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockMarking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkedActorDisplayInfo MarkerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarkerPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBuildingVolume: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoNotBlockMarkerTraceWhenOverlappingPlayer: 1;
    
    ABuildingProp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAsBuildingVolume(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildingVolume();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_GetEyesViewpoint(FVector& OutLocation, FRotator& OutRotation) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BlueprintModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    

    // Fix for true pure virtual functions not being implemented
};

