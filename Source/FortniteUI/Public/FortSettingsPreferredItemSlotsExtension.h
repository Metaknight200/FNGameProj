#pragma once
#include "CoreMinimal.h"
#include "FortSettingDetailExtension.h"
#include "FortSettingsPreferredItemSlotsExtension.generated.h"

class UHorizontalBox;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsPreferredItemSlotsExtension : public UFortSettingDetailExtension {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> SlotItemIconImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> HighlightImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_ItemSlotContainer;
    
public:
    UFortSettingsPreferredItemSlotsExtension();

};

