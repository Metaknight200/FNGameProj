#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "FortAthenaLivingWorldPointProvidersEnabler.generated.h"

class IFortAthenaLivingWorldPointProviderInterface;
class UFortAthenaLivingWorldPointProviderInterface;

UCLASS(Blueprintable)
class AFortAthenaLivingWorldPointProvidersEnabler : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompletedEvaluation, const TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>>&, EnabledPointProviders);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> EnabledLinkedPointProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> AvailableLinkedPointProviders;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EnablerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> LinkedPointProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PointProvidersToEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EvaluateAutomatically;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompletedEvaluation OnCompletedEvaluationDelegate;
    
public:
    AFortAthenaLivingWorldPointProvidersEnabler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveClosestPointProvidersToPoint(const FVector& Point, const float MaximumDistance, const int32 PointsToDisable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasCompletedEvaluation() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetEnablerTags() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> GetEnabledLinkedPointProviders() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EvaluateAndEnablePointProviders();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesStartEnabled() const;
    
};

