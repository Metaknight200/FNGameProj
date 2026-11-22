#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortAthenaReward.generated.h"

class UFortCosmeticItemCard;
class UFortItem;
class UFortItemDefinition;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortAthenaReward : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* SecondaryItemDefToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* RepresentedItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* ItemCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_ClaimedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_LockedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_UnearnedTintOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_OwnedBorder;
    
public:
    UFortAthenaReward();

    UFUNCTION(BlueprintCallable)
    void SetViewOnHovered(bool bShouldViewOnHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetupItem(const UFortItemDefinition* ItemDefToRepresent, int32 Quantity, bool bLevelAchieved, bool bClaimed, bool bLocked, bool bOwned);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateUpdated(bool bClaimed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepresentedItemSet(const UFortItem* RepresentedItem);
    

    // Fix for true pure virtual functions not being implemented
};

