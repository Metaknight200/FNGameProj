#pragma once
#include "CoreMinimal.h"
#include "AthenaMOTDBase.h"
#include "PlaylistMOTD.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistMOTD : public FAthenaMOTDBase {
    GENERATED_BODY()
public:
    FORTNITEUI_API FPlaylistMOTD();
};

