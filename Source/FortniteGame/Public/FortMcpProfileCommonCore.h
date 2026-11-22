#pragma once
#include "CoreMinimal.h"
#include "CatalogPurchaseInfo.h"
#include "EAppStore.h"
#include "ClientUrlContext.h"
#include "ESocialImportPanelPlatform.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCommonCore.generated.h"

UCLASS(Blueprintable, Config=Engine)
class FORTNITEGAME_API UFortMcpProfileCommonCore : public UFortMcpProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ListCatalogEntriesUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AffiliateExpirationSeconds;
    
public:
    UFortMcpProfileCommonCore();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TwitchUpdateBroadcasterRegistration(const FString& AccessToken, const FString& ChannelId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReceiveGiftsEnabled(bool bReceiveGifts, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMtxPlatform(const FString& NewPlatform, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMatchmakingBansViewed(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetForcedIntroPlayed(const FString& ForcedIntroName, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAffiliateName(const FString& AffiliateName, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefundMtxPurchase(const FString& PurchaseId, bool QuickReturn, const FString& GameContext, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PurchaseMultipleCatalogEntries(const TArray<FCatalogPurchaseInfo>& PurchaseInfoList, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IssueFriendCode(const FString& CodeTokenType, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompletePlayerSurvey(const FString& SurveyID, bool bUpdateAllSurveysMetadata, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimSubscriptionRewards(EAppStore AppStore, const FString& UniqueSubscriptionId, const FString& ReceiptInfo, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimMfaEnabled(bool bClaimForStw, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimImportFriendsReward(ESocialImportPanelPlatform Network, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelOrResumeSubscription(EAppStore AppStore, const FString& UniqueSubscriptionId, bool WillAutoRenew, UPARAM(ref) FClientUrlContext& Context);
    
};

