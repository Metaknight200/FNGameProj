#include "MoleEnemyAbilityContainer.h"
#include "Components/SlateWrapperTypes.h"

UMoleEnemyAbilityContainer::UMoleEnemyAbilityContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->Visibility = ESlateVisibility::Hidden;
    this->AbilityUIDataTable = NULL;
    this->Listview_EnemyTasks = NULL;
    this->OwnerWidgetComponent = NULL;
}



