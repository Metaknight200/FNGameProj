#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "GameplayTagContainer.h"
#include "CraftingObjectOnCraftingSuccessDelegate.h"
#include "FortControllerComponent_CraftingNetworkEvents.generated.h"

class AActor;
class AFortPickup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingObjectOnCraftingSuccess OnCraftingSuccess;
    
    UFortControllerComponent_CraftingNetworkEvents(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartCrafting(AActor* CraftingObject, const FName& CraftingFormulaName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReportCraftingSuccess(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickupItemAndStartCrafting(AActor* CraftingObject, AFortPickup* PickUp, const FName& CraftingFormulaName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEjectItems(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimCraftingResults(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelCrafting(AActor* CraftingObject);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCraftingSuccess(AActor* CraftingObject, const FName& FormulaRowName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyCraftingSuccess(AActor* CraftingObject, const FName& FormulaRowName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyCraftingFailed(AActor* CraftingObject, const FGameplayTagContainer& FailedReason);
    
};

