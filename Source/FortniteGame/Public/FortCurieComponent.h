#pragma once
#include "CoreMinimal.h"
#include "CurieComponent.h"
#include "EFortCurieNativeFXType.h"
#include "FortCurieComponent.generated.h"

class AActor;
class UFortCurieCableSocketComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCurieComponent : public UCurieComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastElectricityPropagationParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float LastElectrifiedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float LastFireFXRelatedStateTime;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveStateBitfield, meta=(AllowPrivateAccess=true))
    uint16 ActiveStateBitfield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieCableSocketComponent* CableSocketComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCurieNativeFXType TrackedNativeGlowFlags;
    
public:
    UFortCurieComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveStateBitfield();
    
};

