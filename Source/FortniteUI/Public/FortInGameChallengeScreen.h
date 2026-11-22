#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortInGameChallengeScreen.generated.h"

class UAthenaChallengeTreeView;

UCLASS(Blueprintable, EditInlineNew)
class UFortInGameChallengeScreen : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeTreeView* TreeView_Challenges;
    
public:
    UFortInGameChallengeScreen();

};

