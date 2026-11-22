#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortLevelStreamingData.h"
#include "FortLevelStreamComponent.generated.h"

class ULevel;
class ULevelStreamingDynamic;
class UWorld;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortLevelStreamComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoLoadLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowUnload: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> LevelsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULevelStreamingDynamic*, FFortLevelStreamingData> StreamedLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LevelStreamingData, meta=(AllowPrivateAccess=true))
    TArray<FFortLevelStreamingData> LevelStreamingData;
    
public:
    UFortLevelStreamComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LevelStreamingData();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelRemoved(ULevel* InLevel, UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelAdded(ULevel* InLevel, UWorld* InWorld);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
};

