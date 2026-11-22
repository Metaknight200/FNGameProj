#pragma once
#include "CoreMinimal.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabInterface.h"
#include "FortActivityView.h"
#include "FortActivityCreateView.generated.h"

class UCommonButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityCreateView : public UFortActivityView, public IFortTabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Create;
    
public:
    UFortActivityCreateView();


    // Fix for true pure virtual functions not being implemented
};

