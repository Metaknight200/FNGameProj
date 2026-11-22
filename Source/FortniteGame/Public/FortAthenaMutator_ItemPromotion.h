#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "EFortRarity.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_ItemPromotion.generated.h"

class UDataTable;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_ItemPromotion : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UpgradeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity HighestUpgradeTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ValidWeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bPromoteAllItemsOnRespawn;
    
public:
    AFortAthenaMutator_ItemPromotion(const FObjectInitializer& ObjectInitializer);

};

