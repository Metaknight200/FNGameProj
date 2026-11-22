#pragma once
#include "CoreMinimal.h"
#include "AthenaBattlePassOffer.h"
#include "AthenaSeasonItemEntryBase.h"
#include "AthenaSeasonItemEntryOfferBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UAthenaSeasonItemEntryOfferBase : public UAthenaSeasonItemEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaBattlePassOffer BattlePassOffer;
    
    UAthenaSeasonItemEntryOfferBase();

};

