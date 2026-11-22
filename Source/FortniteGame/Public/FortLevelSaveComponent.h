#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AsyncTaskResult.h"
#include "CreativeLoadedLinkData.h"
#include "EBackupSaveState.h"
#include "FortCreativePlotPermissionData.h"
#include "LevelSaveComponent.h"
#include "OnBackupRestoreStateChangedDelegate.h"
#include "OnBackupSaveStateChangedDelegate.h"
#include "OnDateChangedDelegate.h"
#include "OnSavingStateChangedDelegate.h"
#include "ValkyriePaletteProvider.h"
#include "FortLevelSaveComponent.generated.h"

class UFortCreativeRealEstatePlotItem;
class UFortCreativeRealEstatePlotItemDefinition;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class UFortLevelSaveComponent : public ULevelSaveComponent, public IValkyriePaletteProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnSavingStateChanged OnClientSaveStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnBackupSaveStateChanged OnClientBackupSaveStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnBackupRestoreStateChanged OnClientBackupRestoreStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnDateChanged OnClientCheckpointDateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PaletteLinkCodes, meta=(AllowPrivateAccess=true))
    TArray<FString> PaletteLinkCodes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeRealEstatePlotItemDefinition* RestrictedPlotDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLoadFromRestrictedPlotDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkCodeNumberToAutoLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadRandomLinkCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadMatchAssignedCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCuratedHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadPlaysetFromPlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl AccountIdOfOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OwnerCreativePermissions, meta=(AllowPrivateAccess=true))
    TArray<FString> OwnerCreativePermissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeRealEstatePlotItem* LoadedPlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPermissionsSaveInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCurated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlotPermissionsChanged, meta=(AllowPrivateAccess=true))
    FFortCreativePlotPermissionData PlotPermissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LoadedPlotInstanceId, meta=(AllowPrivateAccess=true))
    FString LoadedPlotInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LoadedLinkData, meta=(AllowPrivateAccess=true))
    FCreativeLoadedLinkData LoadedLinkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Loaded, meta=(AllowPrivateAccess=true))
    bool bIsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAutoSaving, meta=(AllowPrivateAccess=true))
    bool bIsAutoSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BackupSaveState, meta=(AllowPrivateAccess=true))
    EBackupSaveState BackupSaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RestoringStateChanged, meta=(AllowPrivateAccess=true))
    EBackupSaveState RestoringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastCheckpointDate, meta=(AllowPrivateAccess=true))
    FDateTime LastCheckpointDateUtc;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortCreativePlotPermissionData OldPermissions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PublishRateLimitSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackupRateLimitSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestoreRateLimitSeconds;
    
public:
    UFortLevelSaveComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RestoringStateChanged(EBackupSaveState OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlotPermissionsChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PaletteLinkCodes();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OwnerCreativePermissions();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LoadedPlotInstanceId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LoadedLinkData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Loaded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastCheckpointDate(FDateTime OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAutoSaving(bool bOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BackupSaveState(EBackupSaveState OldValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetLoadedLinkData(FCreativeLoadedLinkData& LinkData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetAccountIdOfOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPlayerHavePermissionToEdit(const FUniqueNetIdRepl& UserRequestingPermission) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CloudSaveFinished(const FAsyncTaskResult& Result);
    

    // Fix for true pure virtual functions not being implemented
};

