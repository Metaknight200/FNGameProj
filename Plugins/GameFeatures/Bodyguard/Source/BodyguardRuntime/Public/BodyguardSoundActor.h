#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "BodyguardSoundActor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABodyguardSoundActor : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    ABodyguardSoundActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamVIPIsDBNO_BP(const bool bIsTeamVIP_DBNO, const bool bIsLocalPlayerTheVIP, const bool bIsDead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamVIPIsBeingRevived_BP(const bool bIsBeingRevived, const bool bIsTeamVIP_DBNO, const bool bIsReviving, const bool bIsLocalPlayerTheVIP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamVIPHealth_BP(const float CurrentHealth, const float MaxHealth, const bool bIsLocalPlayerTheVIP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleVIPNotAllowItemPickup_BP() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

