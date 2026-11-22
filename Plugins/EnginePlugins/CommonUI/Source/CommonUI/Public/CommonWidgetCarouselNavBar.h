#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "CommonWidgetCarouselNavBar.generated.h"

class UCommonButtonBase;
class UCommonButtonGroupBase;
class UCommonWidgetCarousel;

UCLASS(Blueprintable)
class COMMONUI_API UCommonWidgetCarouselNavBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonBase> ButtonWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ButtonPadding;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetCarousel* LinkedCarousel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonButtonBase*> Buttons;
    
public:
    UCommonWidgetCarouselNavBar();

    UFUNCTION(BlueprintCallable)
    void SetLinkedCarousel(UCommonWidgetCarousel* CommonCarousel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePageChanged(UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked(UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    
};

