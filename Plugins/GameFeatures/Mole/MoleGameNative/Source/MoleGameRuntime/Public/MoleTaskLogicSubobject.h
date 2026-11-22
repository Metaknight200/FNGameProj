#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EMoleTaskInterruptionType.h"
#include "MoleTaskLogicSubobject.generated.h"

class AActor;
class AController;
class UMolePlayerTaskManagementComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UMoleTaskLogicSubobject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AssociatedTaskActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AssociatedTaskActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AssociatedActorRemovalPolicyBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesAssociatedTaskActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bReplicates: 1;
    
public:
    UMoleTaskLogicSubobject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskExternalInterruption(EMoleTaskInterruptionType InterruptionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOwningTaskNoLongerPrimaryActiveTask(bool bIsActivePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOwningTaskBecomePrimaryActiveTask(bool bIsActivePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitOwningPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterOwningPhase();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAssociatedTaskActorsPendingRemoval(const TArray<AActor*>& InPendingRemovalTaskActors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAssociatedTaskActorsAdded(const TArray<AActor*>& InNewlyAddedTaskActors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMolePlayerTaskManagementComponent* GetOwningPlayerTaskComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetOwningController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ENetRole> GetOwnerRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAssociatedTaskActors() const;
    
};

