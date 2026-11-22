#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "EFortInvalidActivityReason.h"
#include "FortActivityTileDetailsDisplay.generated.h"

class UCommonTextBlock;
class UFortActivityBrowserTag;
class UFortActivityEllipsisTextBlock;
class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityTileDetailsDisplay : public UCommonButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActivityUnSelected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActivitySelected);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivitySelected OnActivitySelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivityUnSelected OnActivityUnSelectedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityEllipsisTextBlock* Text_ActivityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Favorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityBrowserTag* ActivityBrowserTag_EpicOriginal;
    
public:
    UFortActivityTileDetailsDisplay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTileActiveSet(const bool bIsTileActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewImageChanged(const bool bIsLoading, const UTexture* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartySizeChanged(const int32 PartySize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerPromotedToLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerDemoted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsFavoriteChanged(const bool bIsFavorite);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetailsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityFavorited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityEpicCreated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortInvalidActivityReason GetInvalidActivityReason() const;
    
};

