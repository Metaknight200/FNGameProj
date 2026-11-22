#pragma once
#include "CoreMinimal.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabInterface.h"
#include "FortActivityView.h"
#include "Templates/SubclassOf.h"
#include "FortActivityPlayerView.generated.h"

class UCommonActivatableWidgetSwitcher;
class UCommonButtonBase;
class UFortActivityPlayerBrowserView;
class UFortTabListWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityPlayerView : public UFortActivityView, public IFortTabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonBase> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList_PlayerViewTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_PlayerBrowserViews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityPlayerBrowserView* BrowserView_Favorites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityPlayerBrowserView* BrowserView_History;
    
public:
    UFortActivityPlayerView();


    // Fix for true pure virtual functions not being implemented
};

