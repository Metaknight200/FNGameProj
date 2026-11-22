#pragma once
#include "CoreMinimal.h"
#include "MatchmakingUIOverride.generated.h"

class UCommonActivatableWidget;
class UFortAthenaMatchmakingWidgetLegacy;

USTRUCT(BlueprintType)
struct FMatchmakingUIOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> SoftMatchmakingOptionsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortAthenaMatchmakingWidgetLegacy> SoftLobbyMatchmakingWidgetClass;
    
    FORTNITEUI_API FMatchmakingUIOverride();
};

