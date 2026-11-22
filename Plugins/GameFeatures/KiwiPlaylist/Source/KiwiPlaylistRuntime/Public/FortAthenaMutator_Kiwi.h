#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortInitializationInterface.h"
#include "FortSquadStartSearchParamData.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "KiwiPlayerOnDisconnectChangedDelegate.h"
#include "KiwiSquadStartList.h"
#include "Templates/SubclassOf.h"
#include "TimeOfDayOverridePhase.h"
#include "FortAthenaMutator_Kiwi.generated.h"

class AActor;
class AFortPlayerMannequin;
class AFortPlayerStateAthena;
class ALevelSequenceActor;
class ASkeletalMeshActor;
class UFortItemDefinition;
class UKiwiControllerComponent;
class UKiwiPawnComponent;
class UObject;

UCLASS(Blueprintable)
class KIWIPLAYLISTRUNTIME_API AFortAthenaMutator_Kiwi : public AFortAthenaMutator_GameModeBase, public IFortInitializationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKiwiPlayerOnDisconnectChanged OnPlayerDisconnectedChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKiwiControllerComponent> KiwiControllerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKiwiPawnComponent> KiwiPawnComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimeOfDayOverridePhase> TimeOfDayPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MannequinRecentlyRenderedCheckToleranceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NevadaVehicleRecentlyRenderedCheckToleranceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PrisonBlockTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UpperPrisonBridgeSquadStartTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LowerPrisonBridgeSquadStartTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HLODActorsToHideNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EventStartTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadStartSearchParamData PrisonTeleportLocationsSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableParachutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowGameplayCueRecycleSettingChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameplayCueActorRecycleConsoleVariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bClearPlayerBuildingActorClassesOnStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LocalVOManagerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* KiwiSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FKiwiSquadStartList> PrisonBlockTagToSquadStartsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerMannequin*> KiwiMannequins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> KiwiNevadaVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> PrisonAlienPatrolLevelSequenceActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedKiwiAssets;
    
public:
    AFortAthenaMutator_Kiwi(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetKiwiSequenceActor(ALevelSequenceActor* SequenceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool SetEnabledGameplayCueRecycling(const bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetActiveTimeOfDayManagerByTag(const FGameplayTag Tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RegisterPrisonAlienPatrolSequenceActor(ALevelSequenceActor* LevelSequenceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RegisterKiwiNevadaVehicle(ASkeletalMeshActor* NevadaVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RegisterKiwiMannequin(AFortPlayerMannequin* Mannequin);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RegisterKiwiLocalVOManagerActor(AActor* InManager);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerOnDisconnectedChanged(AFortPlayerStateAthena* PlayerState, const bool bIsDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void HandleKiwiNevadaVehicleDestroyed(AActor* NevadaVehicleActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleKiwiMannequinDestroyed(AActor* MannequinActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    TArray<ALevelSequenceActor*> GetRegisteredPrisonAlienPatrolSequenceActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    TArray<ASkeletalMeshActor*> GetRegisteredKiwiNevadaVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    TArray<AFortPlayerMannequin*> GetRegisteredKiwiMannequins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelSequenceActor* GetKiwiSequenceActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    AActor* GetKiwiLocalVOManagerActor() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginAsyncLoadOfItem(const UFortItemDefinition* ItemToLoad);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

