#pragma once
#include "CoreMinimal.h"
#include "CurieManager.h"
#include "GameplayTagContainer.h"
#include "CurieToggleComponentGroup.h"
#include "CurieToggleGroupMemberStateChangeSignatureDelegate.h"
#include "CurieToggleGroupSameStateSignatureDelegate.h"
#include "FortCurieManager.generated.h"

class UActorComponent;
class UFortCurieFXManager;
class UFortCurieManagerComponent;
class UFortCurieManagerComponentConfig;
class UFortCurieSettings;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCurieManager : public UCurieManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurieManagerRegistryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCurieManagerComponent*> CurieManagerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCurieToggleComponentGroup> ToggleComponentGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieFXManager* FXManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ValidStateIdentifiers, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ValidStateIdentifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> StateIdentifierToIdxMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieSettings* CurieSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCurieManagerComponentConfig*> ConfigOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCurieApplicationViaDamageFormulaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurieElementsBlockBuildingEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurieElementsBlockBuildingRepair;
    
public:
    UFortCurieManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnbindDelegateOnToggleGroupMemberActiveStateChange(FGameplayTag ToggleGroup, FCurieToggleGroupMemberStateChangeSignature Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnbindDelegateOnToggleGroupFullyInactive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnbindDelegateOnToggleGroupFullyActive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnToggleGroupComponentDeactivated(UActorComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleGroupComponentActivated(UActorComponent* InComponent, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ValidStateIdentifiers();
    
    UFUNCTION(BlueprintCallable)
    void InternalPhysicsComponentAwakeChanged(UPrimitiveComponent* SimulatingComponent, bool bIsAwake);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BindDelegateOnToggleGroupMemberActiveStateChange(FGameplayTag ToggleGroup, FCurieToggleGroupMemberStateChangeSignature Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BindDelegateOnToggleGroupFullyInactive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BindDelegateOnToggleGroupFullyActive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate);
    
};

