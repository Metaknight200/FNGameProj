#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "EFrontEndCamera.h"
#include "GameplayTagContainer.h"
#include "AthenaMOTDBase.h"
#include "FortPrimaryContentInterface.h"
#include "PrimaryContentSetup.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMOTDWidget.generated.h"

class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UEpicCMSImage;
class UFortActivatableMovieWidget;
class UFortAthenaMOTDTile;
class UFortDynamicEntryBox;
class UFortGameActivityProvider;
class UFortStoreFrontOfferInfo;
class URichTextBlock;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaMOTDWidget : public UCommonActivatableWidget, public IFortPrimaryContentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* MOTDButtonGroup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMOTDTile> MOTDTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatableMovieWidget> NewVideoPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrontEndCamera ActivationFrontendCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryContentSetup PrimaryContentSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattlepassScreenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NavigateLeftInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NavigateRightInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> OfferInfoOwnershipArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SpecialAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SecondarySpecialAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_NormalAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SecondaryNormalAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_MatchmakingNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* CMSImage_SelectedNewsImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* CMSImage_SelectedNewsImage_Blurred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_SelectedNewsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_SelectedNewsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_MOTDEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameActivityProvider* ActivityProvider;
    
public:
    UFortAthenaMOTDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSTWUpsell();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpecialButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSecondarySpecialButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSecondaryNormalButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNormalButtonText(const FText& InText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultImage();
    
    UFUNCTION(BlueprintCallable)
    void SelectNewsByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetViewConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIntroAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool PlayFirstAutoPlayVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedNews(const FAthenaMOTDBase& NewsEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayIntroAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewsPopulated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsActivityLoadingChanged(bool bIsLoading);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToRightNews();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToLeftNews();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedButtonChanged(UCommonButtonLegacy* SelectedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleImageLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAthenaMOTDBase GetNewsByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAthenaMOTDBase BP_GetSelectedNews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AutoPlayedVideo() const;
    

    // Fix for true pure virtual functions not being implemented
};

