#pragma once
#include "CoreMinimal.h"
#include "CommonTabListWidgetLegacy.h"
#include "Components/SlateWrapperTypes.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabListRegistrationInfo.h"
#include "Templates/SubclassOf.h"
#include "FortTabListWidgetBase.generated.h"

class UCommonButtonBase;
class UCommonUserWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortTabListWidgetBase : public UCommonTabListWidgetLegacy {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabContentCreated, FName, TabId, UCommonUserWidget*, TabWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabContentCreated OnTabContentCreated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTabListRegistrationInfo> PreregisteredTabInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideSingleTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility HideSingleTabVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFortTabButtonLabelInfo> PendingTabLabelInfoMap;
    
public:
    UFortTabListWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetTabHiddenState(FName TabNameID, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterFortTab(FName TabNameID, TSubclassOf<UCommonButtonBase> TabButtonType, const FFortTabButtonLabelInfo& LabelInfo, UWidget* ContentWidget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAllPreregisteredTabInfos();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabVisible(FName TabId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastTabActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstTabActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisibleTabCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreregisteredTabInfo(const FName TabNameID, FFortTabListRegistrationInfo& OutTabInfo);
    
};

