#pragma once
#include "CoreMinimal.h"
#include "MoleActiveTaskStateHandle.h"
#include "Blueprint/UserWidget.h"
#include "MoleTaskHUDWidget.generated.h"

class UDynamicEntryBox;
class UMolePlayerTaskManagementComponent;
class UMoleTaskDataAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleTaskHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* ObjectiveEntryBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* TaskProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMolePlayerTaskManagementComponent* CachedOwningTaskComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoleTaskDataAsset* CachedTaskDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMoleActiveTaskStateHandle CachedTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttemptShowActiveObjectives: 1;
    
public:
    UMoleTaskHUDWidget();

    UFUNCTION(BlueprintCallable)
    void SetTaskHandle(FMoleActiveTaskStateHandle TaskHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetTaskAsset(UMoleTaskDataAsset* TaskAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetAttemptShowActiveObjectives(bool bAttemptShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCompactMode();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRepresentedTaskChanged(const UMoleTaskDataAsset* PreviousTaskAsset, FMoleActiveTaskStateHandle PreviousHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnRepresentedLogicPhaseChange();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTaskTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoleTaskDataAsset* GetTaskAsset() const;
    
};

