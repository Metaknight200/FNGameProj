#pragma once
#include "CoreMinimal.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabInterface.h"
#include "FortActivityView.h"
#include "Templates/SubclassOf.h"
#include "FortActivityPlayerBrowserView.generated.h"

class UFortGameActivityProvider;
class UTileView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityPlayerBrowserView : public UFortActivityView, public IFortTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameActivityProvider* ActivityProvider;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameActivityProvider> ActivityProviderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTileView* TileView_PlayerActivities;
    
public:
    UFortActivityPlayerBrowserView();

    UFUNCTION(BlueprintCallable)
    void PlayViewIntro();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayViewIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTileViewUpdated();
    

    // Fix for true pure virtual functions not being implemented
};

