#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameStateComponent.h"
#include "CurieElementAttachConditionHandlersContainer.h"
#include "CurieElementAttachHandlersContainer.h"
#include "CurieElementAttachedSignatureDelegate.h"
#include "CurieElementBeginInteractSignatureDelegate.h"
#include "CurieElementDetachedSignatureDelegate.h"
#include "CurieElementEndInteractSignatureDelegate.h"
#include "CurieElementInteractSignatureDelegate.h"
#include "CurieElementInteractWithContainerHandlersContainer.h"
#include "CurieElementInteractWithElementHandlersContainer.h"
#include "CurieElementInteractWithMaterialHandlersContainer.h"
#include "CurieElementPairKey.h"
#include "CurieStateAttachedSignatureDelegate.h"
#include "CurieStateDetachedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "CurieManager.generated.h"

class AActor;
class UCurieComponent;
class UDataTable;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CURIE_API UCurieManager : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCurieComponent> CurieComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialDataRegistryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ElementDataRegistryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntityStateDataRegistryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MaterialDefinitionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ElementDefinitionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EntityStateDefinitionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCurieElementAttachHandlersContainer> ElementAttachmentHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCurieElementAttachConditionHandlersContainer> ElementAttachmentConditionHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FCurieElementPairKey, FCurieElementInteractWithElementHandlersContainer> ElementInteractWithElementHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCurieElementInteractWithMaterialHandlersContainer> ElementInteractWithMaterialHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCurieElementInteractWithContainerHandlersContainer> ElementInteractWithContainerHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseDataRegistry: 1;
    
public:
    UCurieManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieStateDetached(UObject* CurieOwner, const FCurieStateDetachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieStateAttached(UObject* CurieOwner, const FCurieStateAttachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementInteract(UObject* CurieOwner, const FCurieElementInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementEndInteract(UObject* CurieOwner, const FCurieElementEndInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementDetached(UObject* CurieOwner, const FCurieElementDetachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementBeginInteract(UObject* CurieOwner, const FCurieElementBeginInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateForCurieElementAttached(UObject* CurieOwner, const FCurieElementAttachedSignature& Delegate);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleContainerOwnerDestroyed(AActor* OwnerActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieStateDetached(UObject* CurieOwner, const FCurieStateDetachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieStateAttached(UObject* CurieOwner, const FCurieStateAttachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementInteract(UObject* CurieOwner, const FCurieElementInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementEndInteract(UObject* CurieOwner, const FCurieElementEndInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementDetached(UObject* CurieOwner, const FCurieElementDetachedSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementBeginInteract(UObject* CurieOwner, const FCurieElementBeginInteractSignature& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateForCurieElementAttached(UObject* CurieOwner, const FCurieElementAttachedSignature& Delegate);
    
};

