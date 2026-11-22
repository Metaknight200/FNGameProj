#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "EFortCreativePlotPermission.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCreative.generated.h"

class UFortCreativeRealEstatePlotItemDefinition;

UCLASS(Blueprintable, Config=Engine)
class FORTNITEGAME_API UFortMcpProfileCreative : public UFortMcpProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePublishing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCreativeRealEstatePlotItemDefinition> DefaultBattleLabPlot;
    
public:
    UFortMcpProfileCreative();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePlotPublishInfo(const FString& PlotItemId, const FString& LinkCode, const FString& VkProjectId, const FString& VkModuleId, int32 LinkVersion, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLastUsedCreativePlot(const FString& PlotItemId, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLastUsedBattleLabFile(const FString& PlotItemId, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCreativePlotMetadata(const FString& PlotItemId, const FString& Locale, const FString& Title, const FString& Tagline, const TArray<FString>& DescriptionTags, const FString& YoutubeVideoId, const FString& Introduction, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestoreDeletedIsland(const FString& PlotItemId, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyCreativePlotPermissions(const FString& PlotItemId, EFortCreativePlotPermission Permission, const TArray<FString>& AccountIds, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DuplicateIsland(const FString& IslandId, const FString& Locale, const FString& NewTitle, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeleteIsland(const FString& PlotItemId, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeleteBattleLabIsland(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateNewIslandFromLinkCode(const FString& LinkCode, const FString& Locale, const FString& Title, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateNewIsland(const FString& TemplateId, const FString& Locale, const FString& Title, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateNewBattleLabFile(const FString& TemplateId, const FString& Locale, const FString& Title, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
};

