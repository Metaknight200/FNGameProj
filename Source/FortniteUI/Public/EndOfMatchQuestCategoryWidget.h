#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EndOfMatchQuestCategoryWidget.generated.h"

class UDynamicEntryBox;
class UEndOfMatchQuestEntryWidget;
class USizeBox;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEndOfMatchQuestCategoryWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_CategoryType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* EntryBox_SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_QuestUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEndOfMatchQuestEntryWidget*> QuestWidgetsToShow;
    
public:
    UEndOfMatchQuestCategoryWidget();

private:
    UFUNCTION(BlueprintCallable)
    void StartMoveEntriesDown(UEndOfMatchQuestEntryWidget* NextWidget);
    
    UFUNCTION(BlueprintCallable)
    void StartFirstEntryIntro();
    
    UFUNCTION(BlueprintCallable)
    void ShowNextUpdate();
    
    UFUNCTION(BlueprintCallable)
    void MoveAllEntriesDown();
    
};

