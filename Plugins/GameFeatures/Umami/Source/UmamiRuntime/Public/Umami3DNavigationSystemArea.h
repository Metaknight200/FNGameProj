#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Umami3DNavigationSystemArea.generated.h"

class AUmami3DNavigationSystemArea;

UCLASS(Blueprintable)
class AUmami3DNavigationSystemArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AUmami3DNavigationSystemArea*> NavigationNeighbors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavigationBoxExtent;
    
public:
    AUmami3DNavigationSystemArea(const FObjectInitializer& ObjectInitializer);

};

