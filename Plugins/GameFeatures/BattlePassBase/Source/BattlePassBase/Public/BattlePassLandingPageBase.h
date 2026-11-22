#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "BattlePassSubPageInterface.h"
#include "BattlePassLandingPageBase.generated.h"

class UBattlePassLandingPageButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPASSBASE_API UBattlePassLandingPageBase : public UCommonActivatableWidget, public IBattlePassSubPageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* LastHoveredPageButton;
    
public:
    UBattlePassLandingPageBase();


    // Fix for true pure virtual functions not being implemented
};

