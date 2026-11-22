#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortResourceCountWidget.generated.h"

class UCommonTextBlock;
class UFortLazyImage;
class UFortResourceItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortResourceCountWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ResourceCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortResourceItemDefinition* ResourceItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_ResourceIcon;
    
public:
    UFortResourceCountWidget();

};

