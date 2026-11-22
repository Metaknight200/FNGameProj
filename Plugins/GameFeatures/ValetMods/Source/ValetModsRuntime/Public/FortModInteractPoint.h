#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortInteractInterface.h"
#include "InteractionType.h"
#include "FortModInteractPoint.generated.h"

class AFortValetModBase;
class AFortValetModGarage;

UCLASS(Blueprintable)
class VALETMODSRUNTIME_API AFortModInteractPoint : public AActor, public IFortInteractInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FText InteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortValetModGarage> ModGarage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortValetModBase> Mod;
    
public:
    AFortModInteractPoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
};

