#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "FortChallengeMapPoiData.h"
#include "FortMiniMapInterface.h"
#include "MapLocationRenderData.h"
#include "FortFrontEndMiniMapManager.generated.h"

class UFortQuestItemDefinition;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable, DefaultConfig, Config=Game)
class FORTNITEGAME_API AFortFrontEndMiniMapManager : public AActor, public IFortMiniMapInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ApolloMapMinLoc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ApolloMapMaxLoc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeMapPoiData> PoiDataConfigOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExcludedFromMapNameDisplayPOIs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapLocationFontSizeOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultMapLocationFontColor[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo DefaultMapLocationFont;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MobileMapLocationFontSizeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpybaseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* NamedLocationQuestItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* POIQuestItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapLayerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin MapMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapWorldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CaptureResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMapLocationRenderData> MinimapLocationRenderData_Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMapLocationRenderData> MinimapLocationRenderData_Player2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateFontInfo MapLocationFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapMaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapMaskMaterialMID;
    
public:
    AFortFrontEndMiniMapManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetMapMaterial() const override PURE_VIRTUAL(GetMapMaterial, return NULL;);
    
};

