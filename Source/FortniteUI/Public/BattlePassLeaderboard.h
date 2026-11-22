#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "BattlePassLeaderboard.generated.h"

class UBattlePassLeaderboardListView;
class UCommonButtonLegacy;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassLeaderboard : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SeasonContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLeaderboardListView* ListView_Leaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
public:
    UBattlePassLeaderboard();

};

