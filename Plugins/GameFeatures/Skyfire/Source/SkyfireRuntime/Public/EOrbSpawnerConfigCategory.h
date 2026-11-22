#pragma once
#include "CoreMinimal.h"
#include "EOrbSpawnerConfigCategory.generated.h"

UENUM(BlueprintType)
enum class EOrbSpawnerConfigCategory : uint8 {
    Solo,
    Duos,
    Trios,
    Squads,
    None,
};

