#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "FortLobbyAddPlayer.generated.h"

class UCommonButtonLegacy;
class UFortPartySuggestionButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLobbyAddPlayer : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_EmptySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPartySuggestionButton* PartySuggestion;
    
public:
    UFortLobbyAddPlayer();

};

