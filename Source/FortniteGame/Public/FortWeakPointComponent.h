#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "FortWeakPointHitDelegate.h"
#include "FortWeakPointProviderInterface.h"
#include "ShouldKillWeakSpotDynamicDelegate.h"
#include "FortWeakPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortWeakPointComponent : public USceneComponent, public IFortWeakPointProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortWeakPointHit OnWeakpointHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShouldKillWeakSpotDynamic ShouldKillWeakSpotDynamic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PrimarySurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseComplexForWeakSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeakPointsEnabled;
    
public:
    UFortWeakPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeakPointsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_HandleOwnerDamaged(FGameplayTag MatchingTag, const FGameplayEventData Payload);
    

    // Fix for true pure virtual functions not being implemented
};

