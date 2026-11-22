#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortActivityPlayerBrowserTile.generated.h"

class UFortActivityTileDetailsDisplay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityPlayerBrowserTile : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityTileDetailsDisplay* Display_TileDetails;
    
public:
    UFortActivityPlayerBrowserTile();

private:
    UFUNCTION(BlueprintCallable)
    void HandleActivityUnSelected();
    
    UFUNCTION(BlueprintCallable)
    void HandleActivitySelected();
    

    // Fix for true pure virtual functions not being implemented
};

