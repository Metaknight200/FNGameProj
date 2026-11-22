#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "UObject/NoExportTypes.h"
#include "AthenaMapChallengeCategoryTabButton.generated.h"

class UCommonLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapChallengeCategoryTabButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImageSize_Mobile;
    
public:
    UAthenaMapChallengeCategoryTabButton();

};

