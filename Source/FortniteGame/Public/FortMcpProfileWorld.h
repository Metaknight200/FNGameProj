#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "FortBatchUpdatePlayer_DeployableBaseUpdate.h"
#include "FortBatchUpdatePlayer_Update.h"
#include "FortCloudSaveInfo.h"
#include "FortMcpProfile.h"
#include "FortOutpostCoreInfo.h"
#include "FortWorldPlayerLoadout.h"
#include "FortWorldProfileUpdateRequest.h"
#include "ItemIdAndQuantityPair.h"
#include "ItemTransferOperation.h"
#include "FortMcpProfileWorld.generated.h"

class AFortInventory;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileWorld : public UFortMcpProfile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortWorldProfileUpdateRequest> UpdateRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortWorldPlayerLoadout CachedPlayerLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortInventory* FortInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInventoryInitialized;
    
public:
    UFortMcpProfileWorld();

private:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnlockProfiles(const FString& Code, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StorageTransfer(const TArray<FItemTransferOperation>& TransferOperations, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyQuickbar(const TArray<FString>& PrimaryQuickbarChoices, const FString& SecondaryQuickbarChoice, UPARAM(ref) FClientUrlContext& Context);
    
private:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LockProfiles(const FString& Code, int32 Timeout, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeTheater(const FString& TheaterGuid, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisassembleWorldItems(const TArray<FItemIdAndQuantityPair>& TargetItemIdAndQuantityPairs, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyWorldItems(const TArray<FString>& ItemIds, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DepositPostResources(const TArray<FString>& itemsToDepositIds, const TArray<int32>& itemCountsToDeposit, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CraftWorldItem(const FString& TargetSchematicItemId, int32 NumTimesToCraft, const FString& TargetSchematicTier, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BatchUpdatePlayers_Outpost(const TArray<FFortBatchUpdatePlayer_Update>& Updates, const FString& OutpostId, const FFortOutpostCoreInfo& OutpostInfo, const FFortCloudSaveInfo& CloudSaveInfo, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BatchUpdatePlayers_DeployableBase(const TArray<FFortBatchUpdatePlayer_Update>& Updates, const TArray<FFortBatchUpdatePlayer_DeployableBaseUpdate>& DeployableBaseUpdates, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BatchUpdatePlayers(const TArray<FFortBatchUpdatePlayer_Update>& Updates, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
};

