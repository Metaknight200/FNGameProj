#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "CommonBorder.h"
#include "UCommonVisibilityWidgetBase.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class COMMONUI_API UDEPRECATED_UCommonVisibilityWidgetBase : public UCommonBorder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> VisibilityControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowForGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowForMouseAndKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowForTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility VisibleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility HiddenType;
    
    UDEPRECATED_UCommonVisibilityWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetRegisteredPlatforms();
    
};

