#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInteractionBeingAttempted.h"
#include "TInteractionType.h"
#include "GameplayTagContainer.h"
#include "PlayerTaskStateDataArray.h"
#include "MoleTaskLinkComponent.generated.h"

class AActor;
class AController;
class AFortPawn;
class UDataTable;
class UMoleTaskLinkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleTaskLinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTaskPermissionChanged, AController*, User, bool, bHasPermission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTaskLinkOwnerActorInteract, UMoleTaskLinkComponent*, TaskLinkComponent, const AFortPawn*, InteractingPawn, TEnumAsByte<EInteractionBeingAttempted>, InteractionType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTaskInteractionChanged, AController*, User);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTaskGenericObjectiveStatChanged, UMoleTaskLinkComponent*, TaskLinkComponent, AController*, User, FGameplayTag, ObjectiveStatTag, float, ObjectiveStatDelta);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTaskPermissionChanged OnTaskPermissionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTaskInteractionChanged OnTaskInteractionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTaskGenericObjectiveStatChanged OnTaskGenericObjectiveStatChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTaskLinkOwnerActorInteract OnTaskLinkOwnerActorInteract;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TaskTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TaskInteractionInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPlayerTaskStateDataArray PlayerTaskStateDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bTaskLinkDisabled, meta=(AllowPrivateAccess=true))
    uint8 bTaskLinkDisabled: 1;
    
public:
    UMoleTaskLinkComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdatePlayerInteractionData(AController* User, const FName InteractionInfoRowName);
    
    UFUNCTION(BlueprintCallable)
    void SendGenericObjectiveStatUpdate(AController* User, FGameplayTag ObjectiveStatTag, float ObjectiveStatDelta);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePlayerPermission(AController* User);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePlayerInteractionData(AController* User, bool bAlsoRemovePermission);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bTaskLinkDisabled();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnOwnerActorInteract(const AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> Interaction);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskLinkDisabled() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayerPermission(AController* User) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GivePlayerPermission(AController* User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTaskTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMoleTaskLinkComponent* GetTaskComponent(AActor* TaskActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetInteractionTime(const AFortPawn* InteractingPawn, const TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FText GetInteractionString(const AFortPawn* InteractingPawn, const TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted) const;
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableTaskLink();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanInteract(const AFortPawn* InteractingPawn, const TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, const TEnumAsByte<TInteractionType> InteractionType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddPlayerInteractionData(AController* User, const FName InteractionInfoRowName, bool bGivePermission);
    
};

