#pragma once
#include "CoreMinimal.h"
#include "CommonTextBlock.h"
#include "Templates/SubclassOf.h"
#include "FortActivityScalingTextBlock.generated.h"

class UFortActivityScaleFontList;

UCLASS(Blueprintable)
class UFortActivityScalingTextBlock : public UCommonTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivityScaleFontList> Scaling;
    
public:
    UFortActivityScalingTextBlock();

};

