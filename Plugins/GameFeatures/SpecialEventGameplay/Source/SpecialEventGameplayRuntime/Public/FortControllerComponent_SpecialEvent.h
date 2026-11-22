#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "GameplayTagContainer.h"
#include "FortControllerComponent_SpecialEvent.generated.h"

class AFortAthenaMutator_SpecialEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_SpecialEvent : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_SpecialEvent> SpecialEventMutator;
    
public:
    UFortControllerComponent_SpecialEvent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHandleSpecialClientEvent(const FGameplayTag& EventTag, const int32 Count);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SendSpecialClientEvent(const FGameplayTag EventTag, const int32 Count);
    
};

