#pragma once
#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "EntityActorComponent.generated.h"

class UActorComponent;

UCLASS(Abstract, Blueprintable)
class ENTITYACTOR_API UEntityActorComponent : public UEntityComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_ActorComponent, meta=(AllowPrivateAccess=true))
    UActorComponent* ActorComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreatedActorComponent;
    
public:
    UEntityActorComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorComponent();
    
};

