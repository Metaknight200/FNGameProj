#pragma once
#include "CoreMinimal.h"
#include "FortCachedWeaponOverheatData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCachedWeaponOverheatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeWeaponWasUnequipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatValueAtUneqip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverheatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOverheatedBegan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeHeatWasLastAdded;
    
    FFortCachedWeaponOverheatData();
};

