#pragma once
#include "CoreMinimal.h"
#include "Components/Border.h"
#include "CommonCustomNavigation.generated.h"

DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnCustomNavigationEvent, EUINavigation, NavigationDirection);

UCLASS(Blueprintable, DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonCustomNavigation : public UBorder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomNavigationEvent OnNavigationEvent;
    
    UCommonCustomNavigation();

};

