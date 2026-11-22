#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaInventoryItemStatsWidget.generated.h"

class UDataTable;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryItemStatsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemStatsBoundsTable;
    
public:
    UAthenaInventoryItemStatsWidget();

};

