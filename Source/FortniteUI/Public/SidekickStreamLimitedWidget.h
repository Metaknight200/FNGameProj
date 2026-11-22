#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SidekickStreamLimitedWidget.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USidekickStreamLimitedWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NumNonVisiblePlayers;
    
public:
    USidekickStreamLimitedWidget();

};

