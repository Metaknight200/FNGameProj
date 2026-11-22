#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ContextData.h"
#include "DirectorData.h"
#include "DynamicHUDManager.generated.h"

class UDynamicHUDScene;
class UObject;

UCLASS(Blueprintable)
class UDynamicHUDManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDynamicHUDScene*, FContextData> ActiveScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FDirectorData> ActiveDirectors;
    
public:
    UDynamicHUDManager();

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveScenes(const TArray<UDynamicHUDScene*> Scenes, const UObject* OptionalContext);
    
    UFUNCTION(BlueprintCallable)
    void RemoveScene(const UDynamicHUDScene* Scene, const UObject* OptionalContext);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLayoutPanelZOrder(int32 InZOrder);
    
    UFUNCTION(BlueprintCallable)
    void AddScenes(const TArray<UDynamicHUDScene*> Scenes, const UObject* OptionalContext);
    
    UFUNCTION(BlueprintCallable)
    void AddScene(const UDynamicHUDScene* Scene, const UObject* OptionalContext);
    
};

