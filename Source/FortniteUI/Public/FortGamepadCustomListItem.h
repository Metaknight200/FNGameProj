#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortGamepadCustomListItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGamepadCustomListItem : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UFortGamepadCustomListItem();


    // Fix for true pure virtual functions not being implemented
};

