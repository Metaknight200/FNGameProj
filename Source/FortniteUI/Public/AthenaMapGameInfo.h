#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "FortHUDElementWidget.h"
#include "AthenaMapGameInfo.generated.h"

class UCommonTextBlock;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapGameInfo : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlaylistName;
    
public:
    UAthenaMapGameInfo();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtensionWidgetCreated(EUIExtensionSlot ExtensionSlot, UUserWidget* ExtensionWidget);
    
};

