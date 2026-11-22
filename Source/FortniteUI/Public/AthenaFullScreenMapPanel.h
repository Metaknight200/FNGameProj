#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "Engine/DataTable.h"
#include "AthenaMapScreenContainerTabInterface.h"
#include "AthenaFullScreenMapPanel.generated.h"

class UAthenaMapGameInfo;
class UAthenaMapLayerContainer;
class UContentWidget;
class UFortMarkerDetailsTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaFullScreenMapPanel : public UCommonActivatablePanelLegacy, public IAthenaMapScreenContainerTabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapLayerContainer* MapLayerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContentWidget* Content_GameInfoSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleMapMarkerRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaMapGameInfo> SoftGameInfoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMarkerDetailsTable> SoftMarkerDetailsTable;
    
public:
    UAthenaFullScreenMapPanel();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransistionedFromAnotherMapPanel();
    

    // Fix for true pure virtual functions not being implemented
};

