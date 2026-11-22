#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionOverlayEntry.h"
#include "ELocationEntryState.h"
#include "AthenaCollectionLocationEntry.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionLocationEntry : public UAthenaCollectionOverlayEntry {
    GENERATED_BODY()
public:
    UAthenaCollectionLocationEntry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLocationsFoundSet(ELocationEntryState EntryState);
    
};

