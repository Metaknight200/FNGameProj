#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EntityEnableableComponent.h"
#include "EntityActorCollisionComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorCollisionComponent : public UEntityEnableableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CollisionProfileName, meta=(AllowPrivateAccess=true))
    FName ShadowVar_CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_PrimitiveComponent, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrimitiveComponent> PrimitiveComponentCache;
    
public:
    UEntityActorCollisionComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimitiveComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CollisionProfileName();
    
    UFUNCTION(BlueprintCallable)
    void OnNativeComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnNativeComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnNativeComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnEnabledChanged(bool bIsEnabled);
    
};

