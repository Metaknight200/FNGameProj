#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "UObject/NoExportTypes.h"
#include "AthenaMapLayerContainer.generated.h"

class UAthenaInGameMapIconsOverlay;
class UAthenaMapChallengeListView;
class UAthenaMapLayer;
class UFortQuestItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapLayerContainer : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalizedMapWidgetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapLayer* AthenaMapLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaInGameMapIconsOverlay* AthenaMapIconsOverlay_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapChallengeListView* ListView_NonLocationIconsBelowMap;
    
public:
    UAthenaMapLayerContainer();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleNewContextualObjectives(const TArray<UFortQuestItem*>& ContextualQuests);
    
};

