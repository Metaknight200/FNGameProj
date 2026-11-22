#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPageItemTileSize.h"
#include "FortHoldableButton.h"
#include "BattlePassTileAvailabilityStates.h"
#include "FortBattlePassTileBase.generated.h"

class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortBattlePassTileBase : public UFortHoldableButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitWidth;
    
public:
    UFortBattlePassTileBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetState(const BattlePassTileAvailabilityStates NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(const EPageItemTileSize TileSize, const FVector2D& CellSpacing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(const BattlePassTileAvailabilityStates NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSizeChanged(const FVector2D& NewSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRequiresBattlePass(const bool bRequiresBP);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevealed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPeeked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    BattlePassTileAvailabilityStates GetState() const;
    
};

