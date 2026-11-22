#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleEnemyAbilityContainer.generated.h"

class UCommonListView;
class UDataTable;
class UMoleEnemyAbilityWidgetComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleEnemyAbilityContainer : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AbilityUIDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* Listview_EnemyTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoleEnemyAbilityWidgetComponent* OwnerWidgetComponent;
    
public:
    UMoleEnemyAbilityContainer();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibilityChangeRequested(bool bNewVisibility);
    
};

