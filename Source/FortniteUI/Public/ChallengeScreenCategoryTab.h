#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "ChallengeScreenCategoryTab.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UChallengeScreenCategoryTab : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TabName;
    
    UChallengeScreenCategoryTab();

};

