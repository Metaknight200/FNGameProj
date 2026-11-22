#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaItemElementWidgetBase.h"
#include "AthenaItemIcon.generated.h"

class UAthenaItemTierWidget;
class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemIcon : public UAthenaItemElementWidgetBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_AmmoIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemTierWidget* ItemTierWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLargePreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemIconTextureParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AmmoIconTextureParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfiniteStackCountText;
    
public:
    UAthenaItemIcon();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStackCountTextUpdated(const bool bIsInfinite);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemIconUpdated(const bool bHasItemIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoIconUpdated(const bool bHasAmmoIcon);
    

    // Fix for true pure virtual functions not being implemented
};

