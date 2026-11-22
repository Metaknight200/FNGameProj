#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EntityActorComponent.h"
#include "EntityActorStaticMeshRenderComponent.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorStaticMeshRenderComponent : public UEntityActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStaticMeshComponent> StaticMeshComponentCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshMaterials, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> ShadowVar_MeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnableCollision, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> ShadowVar_EnableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxDrawDistance, meta=(AllowPrivateAccess=true))
    float ShadowVar_MaxDrawDistance;
    
public:
    UEntityActorStaticMeshRenderComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MeshMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxDrawDistance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnableCollision();
    
};

