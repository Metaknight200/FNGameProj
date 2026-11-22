#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponReloadType.h"
#include "FortHUDElementWidget.h"
#include "FortWeaponReticleExtensionWidgetBase.generated.h"

class AFortWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortWeaponReticleExtensionWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* CachedAssociatedWeapon;
    
public:
    UFortWeaponReticleExtensionWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponSingleFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponReloadCancelled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetingChanged(bool bIsADS);
    
    UFUNCTION(BlueprintCallable)
    void HandleTargetingChanged(bool bNewIsADS);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFullyExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void HandleEnterVehiclePassenger();
    
    UFUNCTION(BlueprintCallable)
    void HandleEnterVehicleDriver();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsADS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWeapon* GetEquippedWeapon() const;
    
};

