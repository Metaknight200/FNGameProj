#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CreativeLoadedLinkData.h"
#include "ECreativeLinkPreviewSize.h"
#include "EFortGameActivityType.h"
#include "EMMSPrivacy.h"
#include "EMMSRulePreset.h"
#include "FortGameActivity.generated.h"

class UTexture;
class UTexture2DDynamic;

UCLASS(Blueprintable, MinimalAPI)
class UFortGameActivity : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Mnemonic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SupportCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGameActivityType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Creator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreatorAccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tagline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DescriptionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Matchmaking_MaximumNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Matchmaking_PlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMMSRulePreset Matchmaking_MMSType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMMSPrivacy Matchmaking_MMSPrivacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SortDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverridePlaylistName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> Previews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PreviewPaths;
    
public:
    UFortGameActivity();

private:
    UFUNCTION(BlueprintCallable)
    void OnPreviewRetrieved(bool bSuccess, UTexture2DDynamic* InThumbnailTexture);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedLinkQueryComplete(bool bSuccess, const FString& ErrorMessage, const FCreativeLoadedLinkData& LinkData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPreviewPath(const ECreativeLinkPreviewSize PreviewSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetPreview(const ECreativeLinkPreviewSize PreviewSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFavorite() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void AsyncPreviewLoadComplete();
    
};

