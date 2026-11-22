#pragma once
#include "CoreMinimal.h"
#include "DBNOCustomSettings.h"
#include "DBNOSettingsByActor.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_DBNOSetting.generated.h"

class AActor;
class AFortAthenaMutator_DBNOSetting;
class AFortMinigame;

UCLASS(Blueprintable)
class AFortAthenaMutator_DBNOSetting : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDBNOSettingsByActor> SettingsByActor;
    
public:
    AFortAthenaMutator_DBNOSetting(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnsetDBNOSettings(const AActor* ActorRemovingSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetDBNOSettingsAndOverride(FDBNOCustomSettings InDBNOSettings, AActor* ActorApplyingSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFortAthenaMutator_DBNOSetting* GetDBNOSettingsMutator(const AFortMinigame* Minigame);
    
};

