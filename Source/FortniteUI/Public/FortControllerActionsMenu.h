#pragma once
#include "CoreMinimal.h"
#include "CommonPopupMenuLegacy.h"
#include "Templates/SubclassOf.h"
#include "FortControllerActionsMenu.generated.h"

class UDynamicEntryBox;
class UFortControllerActionsMenuEntry;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortControllerActionsMenu : public UCommonPopupMenuLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortControllerActionsMenuEntry> MenuEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_BindableActions;
    
public:
    UFortControllerActionsMenu();

};

