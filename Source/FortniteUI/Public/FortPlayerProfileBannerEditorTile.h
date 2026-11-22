#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortPlayerProfileBannerEditorTile.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerProfileBannerEditorTile : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> Item;
    
public:
    UFortPlayerProfileBannerEditorTile();


    // Fix for true pure virtual functions not being implemented
};

