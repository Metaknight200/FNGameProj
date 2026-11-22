#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleVoteCastingInfoPanel.generated.h"

class UCommonListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleVoteCastingInfoPanel : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_EliminatedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Voters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Saboteurs;
    
public:
    UMoleVoteCastingInfoPanel();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPanelVisibilityChanged(bool bShouldShowPanel);
    
};

