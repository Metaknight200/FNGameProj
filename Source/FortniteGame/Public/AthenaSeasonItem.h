#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonItemMCPState.h"
#include "FortAccountItem.h"
#include "AthenaSeasonItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItem : public UFortAccountItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaSeasonItemMCPState> SeasonItemStateList;
    
public:
    UAthenaSeasonItem();

};

