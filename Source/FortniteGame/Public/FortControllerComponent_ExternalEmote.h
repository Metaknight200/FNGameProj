#pragma once
#include "CoreMinimal.h"
#include "EmoteActionBinding.h"
#include "ExternalEmoteCategory.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_ExternalEmote.generated.h"

class UInputComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_ExternalEmote : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExternalEmotes, meta=(AllowPrivateAccess=true))
    TArray<FExternalEmoteCategory> ExternalEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UncategorizedEmotes, meta=(AllowPrivateAccess=true))
    TArray<FEmoteActionBinding> UncategorizedEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
public:
    UFortControllerComponent_ExternalEmote(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void PlayUncategorizedEmoteAtIndex(const int32 EmoteIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayEmoteAtIndex(const int32 CategoryIndex, const int32 EmoteIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UncategorizedEmotes(TArray<FEmoteActionBinding>& PreviousUncategorizedEmotes);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExternalEmotes(TArray<FExternalEmoteCategory>& PreviousExternalEmotes);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEmoteActionBinding> GetUncategorizedEmotes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FExternalEmoteCategory> GetExternalEmotes() const;
    
};

