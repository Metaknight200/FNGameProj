#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/IUserListEntry.h"
#include "FortActivityBrowserRow.generated.h"

class UCommonButtonBase;
class UCommonTextBlock;
class UFortActivityListView;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityBrowserRow : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Activities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityListView* ListView_Activities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_PageLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_PageRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileScrollThresholdX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileScrollThresholdY;
    
public:
    UFortActivityBrowserRow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRowPeekStateChanged(const bool bIsInPeekState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRowMoveUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRowMoveDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRowIsActiveChanged(const bool bIsActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryStatusChanged(bool bIsActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryItemChanged(const bool bIsActive, const bool bPlayAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float CurrentOffset);
    
    UFUNCTION(BlueprintCallable)
    void HandleMobileScrollCompleted(FVector2D PendingScrollAmounts);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInPeekState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActive() const;
    

    // Fix for true pure virtual functions not being implemented
};

