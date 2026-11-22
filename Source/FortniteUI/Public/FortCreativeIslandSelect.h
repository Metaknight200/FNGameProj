#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCreativeIslandSelect.generated.h"

class UCommonButtonGroupLegacy;
class UCommonListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandSelect : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* TabButtonGroup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_IslandList;
    
public:
    UFortCreativeIslandSelect();

};

