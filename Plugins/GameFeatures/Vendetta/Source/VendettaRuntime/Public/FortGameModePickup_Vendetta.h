#pragma once
#include "CoreMinimal.h"
#include "FortGameModePickup_Wax.h"
#include "FortGameModePickup_Vendetta.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortGameModePickup_Vendetta : public AFortGameModePickup_Wax {
    GENERATED_BODY()
public:
    AFortGameModePickup_Vendetta(const FObjectInitializer& ObjectInitializer);

};

