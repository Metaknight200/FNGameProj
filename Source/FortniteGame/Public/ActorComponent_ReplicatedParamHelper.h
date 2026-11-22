#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "OnReplicatedParamChangedDelegate.h"
#include "RepParamBoolArray.h"
#include "RepParamFloatArray.h"
#include "RepParamIntegerArray.h"
#include "ActorComponent_ReplicatedParamHelper.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UActorComponent_ReplicatedParamHelper : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplicatedParamChanged OnReplicatedParamChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRepParamFloatArray ParamFloatsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRepParamIntegerArray ParamIntegersArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRepParamBoolArray ParamBoolsArray;
    
public:
    UActorComponent_ReplicatedParamHelper(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SendParamAsInt(const FGameplayTag& ParamTag, int32 Value, bool bForceParamDirty);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SendParamAsFloat(const FGameplayTag& ParamTag, float Value, bool bForceParamDirty);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SendParamAsBool(const FGameplayTag& ParamTag, bool Value, bool bForceParamDirty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParamAsInt(const FGameplayTag ParamTag, int32& Value, bool& bValidParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParamAsFloat(const FGameplayTag ParamTag, float& Value, bool& bValidParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParamAsBool(const FGameplayTag ParamTag, bool& Value, bool& bValidParam);
    
};

