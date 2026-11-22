#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpecialEventHelpers.generated.h"

class AController;
class AFortAthenaMutator_SpecialRelevancy;
class AFortPlayerController;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API USpecialEventHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpecialEventHelpers();

    UFUNCTION(BlueprintCallable)
    static void MarkAccountAsHavingSeenForcedIntro(AFortPlayerController* Controller, bool bLocalOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSeenForcedIntro(AController* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortAthenaMutator_SpecialRelevancy* GetSpecialRelevancyMutator(const UObject* WorldContextObject);
    
};

