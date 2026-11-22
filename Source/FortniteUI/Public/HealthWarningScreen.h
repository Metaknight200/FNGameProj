#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "HealthWarningScreen.generated.h"

class UCommonTextBlock;
class URestrictedCountryRatingIcons;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHealthWarningScreen : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowTimeLength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_HealthWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URestrictedCountryRatingIcons* RatingIcons_RatingIcons;
    
public:
    UHealthWarningScreen();

};

