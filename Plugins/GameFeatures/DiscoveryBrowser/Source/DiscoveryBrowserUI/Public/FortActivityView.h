#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortActivityView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityView : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCustomMatchmakingModalButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSpectateMatchModalButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMobileGameDetailsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMobileAcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBackToTopButton;
    
public:
    UFortActivityView();

};

