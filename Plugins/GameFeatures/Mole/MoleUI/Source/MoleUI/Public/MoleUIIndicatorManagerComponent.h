#pragma once
#include "CoreMinimal.h"
#include "ControllerComponent.h"
#include "MoleUIIndicatorManagerComponentInterface.h"
#include "Blueprint/UserWidgetPool.h"
#include "Templates/SubclassOf.h"
#include "MoleUIIndicatorManagerComponent.generated.h"

class AActor;
class UMoleSubobjectiveIndicatorWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleUIIndicatorManagerComponent : public UControllerComponent, public IMoleUIIndicatorManagerComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMoleSubobjectiveIndicatorWidget> SubobjectiveIndicatorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool IndicatorPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UMoleSubobjectiveIndicatorWidget*> ActorToSubobjectiveIndicatorMap;
    
public:
    UMoleUIIndicatorManagerComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

