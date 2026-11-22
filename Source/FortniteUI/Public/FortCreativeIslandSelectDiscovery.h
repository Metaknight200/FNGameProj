#pragma once
#include "CoreMinimal.h"
#include "FortCreativeIslandSelectV2.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeIslandSelectDiscovery.generated.h"

class UFortCreativeDiscoverySurfaceManager;
class UFortCreativeIslandSelectTab;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandSelectDiscovery : public UFortCreativeIslandSelectV2 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeDiscoverySurfaceManager* Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DiscoverySurfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCreativeIslandSelectTab> SurfaceWidget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InsertDiscoveryTabsAtIndex;
    
public:
    UFortCreativeIslandSelectDiscovery();

};

