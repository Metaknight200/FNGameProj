#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "McpProfile.h"
#include "EFortCollectedState.h"
#include "FortMcpCollectionsBulkUpdateEntry.h"
#include "FortMcpCollectionsVariant.h"
#include "FortMcpProfileCollections.generated.h"

class UFortCollectionData;
class UFortCollectionsTaskManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileCollections : public UMcpProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UFortCollectionData*> DataTables;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCollectionsTaskManager* TaskManager;
    
public:
    UFortMcpProfileCollections();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarkCollectedItemsSeen(const TArray<FFortMcpCollectionsVariant>& Variants, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BulkUpdateCollections(const TArray<FFortMcpCollectionsBulkUpdateEntry>& Items, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddToCollection(const FString& Category, const FString& Variant, const TArray<FString>& ContextTags, const FJsonObjectWrapper& Properties, EFortCollectedState SeenState, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
};

