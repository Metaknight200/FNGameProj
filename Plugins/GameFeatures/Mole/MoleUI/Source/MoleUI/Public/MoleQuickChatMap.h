#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "MoleQuickChatMap.generated.h"

class UCommonButtonBase;
class UMoleQuickChatMapEntry;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMoleQuickChatMap : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoleQuickChatMapEntry* DefaultRoomWidgetToFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_SkipLocation;
    
public:
    UMoleQuickChatMap();

};

