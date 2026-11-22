#pragma once
#include "CoreMinimal.h"
#include "WebEnvUrl.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "EAppStore.h"
#include "WebJSFunction.h"
#include "WebJSFunction.h"
#include "AthenaDataTableSet.h"
#include "AudioDynamicSoundData.h"
#include "EFortGameFeature.h"
#include "FortKairosLoadElectraPlayerDelegateDelegate.h"
#include "FortOnSubGameChangedBPDelegate.h"
#include "PlaylistFrontEndSettings.h"
#include "PlaylistOverrideData.h"
#include "FortGameInstance.generated.h"

class AActor;
class AContentBeaconClient;
class UCurveTable;
class UDAD_CosmeticItemUserOptionsCollection;
class UDAD_IslandQuerier;
class UDataTable;
class UFortAppActivationSoundMixManager;
class UFortChat;
class UFortCreativeDiscoverySurfaceManager;
class UFortDataAssetDirectoryManager;
class UFortInteractabilityTracker;
class UFortInventoryManager;
class UFortLinkDataManager;
class UFortLocalPlayer;
class UFortMatchAnalytics;
class UFortMatchmaking;
class UFortMatchmakingV2;
class UFortMaterialCacheManager;
class UFortMissionGenerator;
class UFortPartySpectateAnalytics;
class UFortPlaylistManager;
class UFortPushNotificationManager;
class UFortRegisteredPlayerInfo;
class UFortRejoinCheck;
class UFortSeasonalEventManager;
class UFortSocialManager;
class UFortTooltipManager;
class UFortTournamentManager;
class UFortUpdateManager;
class UKairosHeartbeatManager;
class UMcpProfileManager;
class UPegasusDriver;
class UReplayVideoManager;
class USidecarSys;
class UVideoExtractionBootstrapper;

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Game)
class UFortGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortKairosLoadElectraPlayerDelegate OnKairosLoadElectraPlayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> EventFlagsForcedOnByHotfix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> EventFlagsForcedOffByHotfix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> CosmeticsBlacklistedByHotfix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> CosmeticsBlacklistedByHotfixInCompetitive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> NiagaraAssetsBlacklistedByHotfix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleRoyaleMatchmakingEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreativeModeProfileEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistOverrideData> PlaylistOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioDynamicSoundData> DynamicSoundData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistFrontEndSettings> FrontEndPlaylistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaDataTableSet AthenaDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UDataTable>, UDataTable*> CachedBaseDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UCurveTable>, UCurveTable*> CachedBaseCurveTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverridingCurrentEmoteMusicFFT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentEmoteMusicFFT100hz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentEmoteMusicFFT2000hz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EmoteMusicEnvelopeBeatCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKairosHeartbeatManager* KairosHeartbeatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMcpProfileManager* ProfileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortInventoryManager* InventoryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMatchmaking* Matchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMatchmakingV2* MatchmakingV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortRejoinCheck* RejoinCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSocialManager* SocialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMatchAnalytics* MatchAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPartySpectateAnalytics* PartySpectateAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USidecarSys* SidecarSys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GlobalUnregistrationSaveGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTooltipManager* TooltipManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortRegisteredPlayerInfo*> RegisteredPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUpdateManager* UpdateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortDataAssetDirectoryManager* DataAssetDirectoryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInteractabilityTracker* InteractabilityTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortChat* Chatroom;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortRegisteredPlayerInfo>> RegisteredPlayerInfosAwaitingRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastGameHighlightGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSeasonalEventManager* SeasonalEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTournamentManager* TournamentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPushNotificationManager* MobilePushNotificationManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BroadcastFeatureStatusRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMissionGenerator* CurrentMissionGenerator;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortOnSubGameChangedBP OnSubGameChangedBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAppActivationSoundMixManager* AppActivationSoundMixManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KairosUIResX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KairosUIResY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWebEnvUrl> KairosWebUrls;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KairosMinSupportedAppVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KairosHotfixCheckTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KairosHotfixCheckVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistManager* PlaylistManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortLocalPlayer*> LoggedInPlayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAppStore> StoreSupport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAppStore> StoreSupport_Android_Samsung;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAppStore> StoreSupport_Android_SideloadSamsung;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAppStore> StoreSupport_Android_SideloadOther;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAppStore> StoreSupportPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMaterialCacheManager* MaterialCacheManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayVideoManager* ReplayVideoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVideoExtractionBootstrapper* ExtractionBootstrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPegasusDriver* PegasusDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AContentBeaconClient* ContentBeaconClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDAD_IslandQuerier* DADIslandQuerier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDAD_CosmeticItemUserOptionsCollection* DADCosmeticItemUserOptionsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeDiscoverySurfaceManager* CreativeDiscoverySurfaceManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> BlacklistedPhysicsAssets;
    
public:
    UFortGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UninstallFortniteBROnNextBoot(bool bRestartApp, bool bPromptForRestart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UninstallAllOptionalContentOnNextBoot(bool bRestartApp, bool bPromptForRestart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUserSetting(const FString& Key, const FString& Value, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideCurrentMusicFFT(float FFT100hz, float FFT2000hz);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMultipleUserSettings(const TMap<FString, FString>& Settings, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHotfixCompleteCallback(FWebJSFunction Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFeatureStatusCallback(FWebJSFunction Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetErrorSimulationCommands(const FString& CommandLine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestBroadcast();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseContentInstall();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenUpdateApp();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTournamentDataRefreshed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void KairosSubmitBugReport(const FString& Subject, const FString& Body, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsContentUpToDate(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetUserSetting(const FString& Key, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetProjectVersion(FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortLinkDataManager* GetLinkDataManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetHotfixHasApplied(FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFeatureRequiredSizesRequiredOnly(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFeatureRequiredSizesOptionalOnly(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFeatureRequiredSizes(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSeasonalEventManager* GetEventManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortDataAssetDirectoryManager* GetDataAssetDirectoryManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDAD_IslandQuerier* GetDADIslandQuerier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDAD_CosmeticItemUserOptionsCollection* GetDADCosmeticItemOptionsCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetContentState(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAnalyticsSessionDetails(FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreatePlayerWithLoginInfo(int32 ControllerId, const FString& Email, const FString& Password);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateBackgroundPlayer(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ContinueDelayedStartup();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideCurrentMusicFFT();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckLatestClient(FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeActiveGameFeature(const FString& FeatureString);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CancelUninstallFortniteBROnNextBoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CancelUninstallAllOptionalContentOnNextBoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelContentInstall();
    
};

