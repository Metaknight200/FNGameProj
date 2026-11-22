#pragma once
#include "CoreMinimal.h"
#include "FortCreativeIslandLinkScreen.h"
#include "FortCreativeIslandLinkScreenServerBrowser.generated.h"

class UFortCreativeIslandLink;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandLinkScreenServerBrowser : public UFortCreativeIslandLinkScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeIslandLink* LastSelectedIsland;
    
public:
    UFortCreativeIslandLinkScreenServerBrowser();

protected:
    UFUNCTION(BlueprintCallable)
    void SetLastSelectedIsland(UFortCreativeIslandLink* InLastSelectedIsland);
    
};

