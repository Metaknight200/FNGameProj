#pragma once
#include "CoreMinimal.h"
#include "PawnComponent.h"
#include "MolePawnComponent.generated.h"

class AFortPlayerPawn;
class UFortCharacterCustomizationData;
class UFortFootstepAudioBank;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMolePawnComponent : public UPawnComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialOpacityParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GhostMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortFootstepAudioBank* PlayerFootstepBankBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerFootstepBankPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCharacterCustomizationData* BaseCustomizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCharacterCustomizationData* GhostCustomizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsGhost, meta=(AllowPrivateAccess=true))
    bool bIsGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GhostCollisionProfile;
    
public:
    UMolePawnComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsGhost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBecameHuman();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBecameGhost();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnCustomizationComplete(AFortPlayerPawn* Pawn);
    
};

