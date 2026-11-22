#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "GameFramework/Actor.h"
#include "FortEQSPrevisActor.generated.h"

class UEnvQuery;
class USceneComponent;

UCLASS(Blueprintable)
class AFortEQSPrevisActor : public AActor, public IEQSQueryResultSourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
public:
    AFortEQSPrevisActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetQueryTemplate(UEnvQuery* InPrevisQueryTemplate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepForPrevis();
    

    // Fix for true pure virtual functions not being implemented
};

