#pragma once
#include "CoreMinimal.h"
#include "FortWeaponRanged.h"
#include "TowhookParams.h"
#include "FortWeaponRangedTowHook.generated.h"

class AActor;
class AFortPhysicsTowHook;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortWeaponRangedTowHook : public AFortWeaponRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TowHook, meta=(AllowPrivateAccess=true))
    AFortPhysicsTowHook* TowHook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTowhookParams TowhookParams;
    
    AFortWeaponRangedTowHook(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_TowHook();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DetachActorsFromTowHook();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AttachToTowHook(AActor* ActorToAttach);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActorDetachedFromTowHook(const AActor* DetachedActor);
    
};

