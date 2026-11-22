#include "FortMcpProfileCollections.h"

UFortMcpProfileCollections::UFortMcpProfileCollections() {
    this->TaskManager = NULL;
}

void UFortMcpProfileCollections::MarkCollectedItemsSeen_Implementation(const TArray<FFortMcpCollectionsVariant>& Variants, FClientUrlContext& Context) {
}

void UFortMcpProfileCollections::BulkUpdateCollections_Implementation(const TArray<FFortMcpCollectionsBulkUpdateEntry>& Items, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileCollections::AddToCollection_Implementation(const FString& Category, const FString& Variant, const TArray<FString>& ContextTags, const FJsonObjectWrapper& Properties, EFortCollectedState SeenState, FDedicatedServerUrlContext& Context) {
}


