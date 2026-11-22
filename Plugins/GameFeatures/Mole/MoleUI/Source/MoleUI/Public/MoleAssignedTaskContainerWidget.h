#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleAssignedTaskContainerWidget.generated.h"

class UDynamicEntryBox;
class UMolePlayerTaskManagementComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleAssignedTaskContainerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* TaskWidgetEntryBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMolePlayerTaskManagementComponent* CachedOwningTaskComponent;
    
public:
    UMoleAssignedTaskContainerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnActiveTasksChanged(bool bFrameDefer);
    
};

