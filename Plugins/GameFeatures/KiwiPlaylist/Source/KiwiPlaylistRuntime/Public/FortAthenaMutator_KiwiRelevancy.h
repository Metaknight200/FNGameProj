#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_SpecialRelevancy.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator_KiwiRelevancy.generated.h"

UCLASS(Blueprintable)
class KIWIPLAYLISTRUNTIME_API AFortAthenaMutator_KiwiRelevancy : public AFortAthenaMutator_SpecialRelevancy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelevancyDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredNumZapBursts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KevinCubeZapTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BackpackExplosionTag;
    
public:
    AFortAthenaMutator_KiwiRelevancy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ZapSquads(const int32 FromIndex, const int32 ToIndex, const int32 MatchingOffset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartKevinRoomRelevancy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupOuterSpaceMannequins();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void KevinRoomStopZappingSquads();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void KevinRoomStartZappingSquads(float ZapInterval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExplodeSquads();
    
};

