#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_WeaponSettings.generated.h"

class UFortItemDefinition;
class UFortWeaponSettingsComponent;
class UObject;

UCLASS(Blueprintable)
class AFortAthenaMutator_WeaponSettings : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortWeaponSettingsComponent*> WeaponSettings;
    
public:
    AFortAthenaMutator_WeaponSettings(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveDataSource(UObject* DataSource);
    
    UFUNCTION(BlueprintCallable)
    void AddDataSourceForTeam(UFortItemDefinition* ItemDefinition, const uint8 TeamIndex, UObject* DataSource);
    
    UFUNCTION(BlueprintCallable)
    void AddDataSourceForClassSlot(UFortItemDefinition* ItemDefinition, const uint8 ClassSlot, UObject* DataSource);
    
};

