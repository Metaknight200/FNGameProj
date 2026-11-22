#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortPrimaryContentInterface.h"
#include "Templates/SubclassOf.h"
#include "FortSubscriptionProgressiveSizzleVideo.generated.h"

class UFortActivatableMovieWidget;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortSubscriptionProgressiveSizzleVideo : public UCommonActivatableWidget, public IFortPrimaryContentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatableMovieWidget> SizzleVideoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_VideoFrame;
    
public:
    UFortSubscriptionProgressiveSizzleVideo();


    // Fix for true pure virtual functions not being implemented
};

