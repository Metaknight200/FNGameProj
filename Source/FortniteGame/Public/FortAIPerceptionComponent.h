#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "FortAIPerceptionComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LosingSightRadiusBump;
    
    UFortAIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

};

