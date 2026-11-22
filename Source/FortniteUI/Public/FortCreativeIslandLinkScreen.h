#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Types/SlateEnums.h"
#include "CachedIslandsGroup.h"
#include "EFortCreativeIslandLinkValidationResult.h"
#include "FortActivatablePanel.h"
#include "OnCreativeIslandCodeConfirmedDelegate.h"
#include "OnEditableTextIslandLinkModifiedDelegate.h"
#include "FortCreativeIslandLinkScreen.generated.h"

class AFortAthenaCreativePortal;
class UCommonButtonLegacy;
class UCommonWidgetSwitcherLegacy;
class UEditableText;
class UFortCreativeIslandLink;
class UListView;
class UObject;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandLinkScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDebugIslandLinks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeIslandCodeConfirmed OnCreativeIslandCodeConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEditableTextIslandLinkModified OnEditableTextIslandLinkModified;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MatchmakingOffDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MatchmakingKeepFullDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MatchmakingRespectPartiesDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_IslandLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ListView_IslandLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeIslandLink* LastLinkQueried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeIslandLink* UserEnteredIslandLink;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Refresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Remove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedIslandsGroup FavoriteIslands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedIslandsGroup IslandHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaCreativePortal* TargetPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastRefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastTestedMnemonic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCodeLookupRequestInFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendsGetRequestInFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFavoritesOnlyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DetailsScrollUpInputRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DetailsScrollDownInputRowHandle;
    
public:
    UFortCreativeIslandLinkScreen();

    UFUNCTION(BlueprintCallable)
    void SetTargetPortal(AFortAthenaCreativePortal* Portal);
    
    UFUNCTION(BlueprintCallable)
    void SetFavoritesOnlyMode(bool bFavoritesOnly);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIslandFromHistory(const FString& LinkCode);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIslandFromFavorites(UFortCreativeIslandLink* LinkEntry);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreativeIslandLinkValidated(EFortCreativeIslandLinkValidationResult ValidateResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreativeIslandLinksPopulated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyEligible(const UFortCreativeIslandLink* IslandLink) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleIslandSelectionChanged(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void HandleIslandLinkCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleIslandLinkChanged(const FText& Text);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMatchmakingTypeDescription(const UFortCreativeIslandLink* IslandLink) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddIslandToFavorites(UFortCreativeIslandLink* LinkEntry);
    
};

