#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "MoleQuickChatPlayersWidget.generated.h"

class UCommonButtonBase;
class UInputComponent;
class UMoleQuickChatPlayerEntry;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UMoleQuickChatPlayersWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSkipButtonEnabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* PlayersInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoleQuickChatPlayerEntry*> PlayerButtons;
    
public:
    UMoleQuickChatPlayersWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFilterChanged();
    
};

