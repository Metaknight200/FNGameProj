#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortFactionAttitude.h"
#include "FortAffiliationFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class UFortAffiliationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortAffiliationFunctionLibrary();

private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveFromFaction(const AActor* Actor, const FGameplayTag FactionTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveFromAllFactions(const AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FGameplayTagContainer GetCurrentFactions(const AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeAttitudeBetweenActors(UObject* WorldContextObject, const AActor* FactionOwner, const AActor* TowardsActor, const TEnumAsByte<EFortFactionAttitude::Type> Attitude);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddToFactions(const AActor* Actor, const FGameplayTagContainer& FactionsTagContainer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddToFaction(const AActor* Actor, const FGameplayTag FactionTag);
    
};

