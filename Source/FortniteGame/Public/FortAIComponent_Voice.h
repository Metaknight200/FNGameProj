#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortAIComponent_Voice.generated.h"

class UFortTaggedSoundBank;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAIComponent_Voice : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UFortTaggedSoundBank* VoiceSoundBank;
    
public:
    UFortAIComponent_Voice(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetVoiceSoundBank(UFortTaggedSoundBank* InSoundBank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortTaggedSoundBank* GetVoiceSoundBank() const;
    
};

