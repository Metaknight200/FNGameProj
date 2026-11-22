#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeInteractVisualizationComponent.generated.h"

class AFortMinigame;
class UCurveFloat;
class UMaterialInterface;
class UNavAreaBase;
class UShapeComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class UFortCreativeInteractVisualizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UShapeComponent> CollisionComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> CollisionComponentAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StaticMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ComponentRelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VisualizationDiameterStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VisualizationDiameterDesired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InteractRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingShow;
    
public:
    UFortCreativeInteractVisualizationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRadius(const float InInteractRadius);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayModeChanged(AFortMinigame* InMinigame, bool bIsInPlayMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetVisualMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisualizationDiameterStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisualizationDiameterDesired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPendingShow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UShapeComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVisualMeshComponentCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdateVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdateCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCollisionComponentCreated();
    
};

