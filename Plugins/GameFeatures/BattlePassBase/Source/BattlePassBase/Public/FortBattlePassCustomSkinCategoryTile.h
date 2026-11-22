#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortBattlePassCustomSkinCategoryTile.generated.h"

class UFortBattlePassTile;
class UFortDynamicEntryBox;
class UProgressBar;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* FortDynamicEntryBox_Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_CategoryTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortBattlePassTile* PreviewedTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnedRewards;
    
public:
    UFortBattlePassCustomSkinCategoryTile();

    UFUNCTION(BlueprintCallable)
    void SetPreviewedTile(const int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnedTilesUpdated(const int32 CurrentlyOwnedRewards, const int32 TotalRewards, const float CategoryProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedStateChanged(const bool bCategoryLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedProgressUpdated(const int32 CurrentlyOwnedBeforeCategory, const int32 TotalRewardsBeforeCategory, const float LockedProgress);
    
public:
    UFUNCTION(BlueprintCallable)
    void FocusTile(const int32 Index);
    
};

