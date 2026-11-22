#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent.h"
#include "MolePlayerVisibilityManagerComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMolePlayerVisibilityManagerComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> Ghosts;
    
public:
    UMolePlayerVisibilityManagerComponent(const FObjectInitializer& ObjectInitializer);

};

