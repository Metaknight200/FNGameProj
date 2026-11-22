#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortInteractInterface.h"
#include "InteractionType.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "KiwiKevinCubeInteractActor.generated.h"

class AFortAthenaMutator_KiwiRelevancy;
class AFortPlayerPawn;
class UGameplayEffect;
class USceneComponent;

UCLASS(Blueprintable, MinimalAPI)
class AKiwiKevinCubeInteractActor : public AActor, public IFortInteractInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PlayerPositionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractContextText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> KevinCubeInteractGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KevinCubeInteractGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KevinCubeInteractGameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfKevinCubeTouchAnimations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_KiwiRelevancy* KiwiRelevancyMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> OccupiedPlayerPawns;
    
public:
    AKiwiKevinCubeInteractActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
};

