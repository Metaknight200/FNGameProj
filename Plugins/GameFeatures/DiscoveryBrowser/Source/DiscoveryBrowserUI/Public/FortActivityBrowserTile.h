#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserListEntry.h"
#include "FortActivityBrowserTile.generated.h"

class UFortActivityTileDetailsDisplay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityBrowserTile : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityTileDetailsDisplay* Display_TileDetails;
    
public:
    UFortActivityBrowserTile();

private:
    UFUNCTION(BlueprintCallable)
    void HandleActivitySelected();
    

    // Fix for true pure virtual functions not being implemented
};

