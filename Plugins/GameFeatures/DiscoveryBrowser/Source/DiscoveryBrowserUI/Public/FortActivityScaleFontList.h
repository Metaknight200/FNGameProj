#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortActivityScaleFontData.h"
#include "FortActivityScaleFontList.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortActivityScaleFontList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortActivityScaleFontData> ScaleData;
    
    UFortActivityScaleFontList();

};

