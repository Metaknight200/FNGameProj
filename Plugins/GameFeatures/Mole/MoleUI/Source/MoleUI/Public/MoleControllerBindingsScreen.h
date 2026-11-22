#pragma once
#include "CoreMinimal.h"
#include "ECommonGamepadType.h"
#include "FortOptionsTab.h"
#include "MoleControllerBindingsScreen.generated.h"

class UCommonLazyImage;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UMoleControllerBindingsScreen : public UFortOptionsTab {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECommonGamepadType, TSoftObjectPtr<UObject>> ControllerImages;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_Controller;
    
public:
    UMoleControllerBindingsScreen();

};

