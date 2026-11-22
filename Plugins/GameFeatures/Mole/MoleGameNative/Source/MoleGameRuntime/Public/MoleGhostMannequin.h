#pragma once
#include "CoreMinimal.h"
#include "FortPlayerMannequin.h"
#include "MoleGhostMannequin.generated.h"

class APlayerState;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class AMoleGhostMannequin : public AFortPlayerMannequin {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GhostMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* RepresentedPlayerState;
    
public:
    AMoleGhostMannequin(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepresentedPlayerSet(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* GetRepresentedPlayer() const;
    
};

