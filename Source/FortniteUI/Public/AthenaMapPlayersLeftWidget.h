#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaMapPlayersLeftWidget.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapPlayersLeftWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayersTeamsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayersTeamsLeftTextFormat;
    
public:
    UAthenaMapPlayersLeftWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaxSquadSizeSet(int32 MaxSquadSize);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTeamsLeftChanged(int32 NumTeamsLeft);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayersLeftChanged(int32 NumPlayersLeft);
    
};

