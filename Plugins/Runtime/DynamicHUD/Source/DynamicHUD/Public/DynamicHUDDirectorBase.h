#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicHUDDirectorBase.generated.h"

class UDynamicHUDScene;

UCLASS(Blueprintable)
class DYNAMICHUD_API ADynamicHUDDirectorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicHUDScene*> DefaultScenes;
    
public:
    ADynamicHUDDirectorBase(const FObjectInitializer& ObjectInitializer);

};

