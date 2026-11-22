#pragma once
#include "CoreMinimal.h"
#include "CommonInputActionDataBase.h"
#include "CommonInputTypeInfo.h"
#include "ECommonGamepadType.h"
#include "CommonInputActionData.generated.h"

USTRUCT(BlueprintType)
struct COMMONUILEGACY_API FCommonInputActionData : public FCommonInputActionDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECommonGamepadType, FCommonInputTypeInfo> GamepadInputTypeInfoOverrides;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonInputTypeInfo GamepadInputTypeInfos[6];
    
public:
    FCommonInputActionData();
};

