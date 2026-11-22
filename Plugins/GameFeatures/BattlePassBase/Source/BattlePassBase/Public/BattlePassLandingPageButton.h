#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "UObject/NoExportTypes.h"
#include "EBattlePassFeatures.h"
#include "EBattlePassView.h"
#include "BattlePassLandingPageEntryPreviewInfo.h"
#include "BattlePassLandingPageButton.generated.h"

class UFortBangWrapper_NUI;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UBattlePassLandingPageButton : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattlePassView SubPageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattlePassFeatures FeatureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattlePassLandingPageEntryPreviewInfo PreviewInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBangWrapper_NUI* BangWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesTelemetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Telemetry_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Telemetry_Position;
    
public:
    UBattlePassLandingPageButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubscriptionTextureLoaded(UTexture2D* Texture);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubscriptionOwnershipUpdated(const bool bOwnsSubsciption);
    
};

