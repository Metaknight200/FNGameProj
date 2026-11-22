#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DynamicHUDDirectorBase.h"
#include "ModuleData.h"
#include "HermesPlaysetsDirector.generated.h"

class AFortPlayerControllerAthena;
class UFortItemDefinition;
class UTexture2D;

UCLASS(Blueprintable)
class HERMESPLAYSETSUI_API AHermesPlaysetsDirector : public ADynamicHUDDirectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* AddItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentDownloadLinkCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAssetData> DownloadAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> DownloadProjectDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LoadedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> CookingImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> LoadingImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCookingImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLoadingImages;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FModuleData> ModuleToDownloadedItems;
    
public:
    AHermesPlaysetsDirector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestPlaysetFromCode(const FString& InCode, const FString& InProjectId, const FString& InTitleName, AFortPlayerControllerAthena* InFortPlayerControllerAthena);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLinkCodePreviewFromCode(const FString& InCode, AFortPlayerControllerAthena* InFortPlayerControllerAthena);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNewLinkCodeChanged(const TArray<FString>& UpdatedLinkCodes);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LoadLinkCodeMetaData(const FString& InLinkCode, const FString& InProjectId, AFortPlayerControllerAthena* InFortPlayerControllerAthena);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LinkCodeMetaDataLoaded(const FString& InLinkCode, const FString& InProjectId, const FString& InTitleString);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HermesPlaysetLinkCodeResolved(const FString& InLinkCode, const FString& InProjectId, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HermesPlaysetDownloadedOnServer(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlaysetDownloadedSuccess(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddProject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddLinkCode(const FString& InLinkCode) const;
    
};

