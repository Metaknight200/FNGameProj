#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartModifier.h"
#include "CustomCharacterPartModifier_TripleScoopBackpack_Common.generated.h"

UCLASS(Blueprintable)
class ACustomCharacterPartModifier_TripleScoopBackpack_Common : public ACustomCharacterPartModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseWheelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdlePlayerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RollingPeriod;
    
public:
    ACustomCharacterPartModifier_TripleScoopBackpack_Common(const FObjectInitializer& ObjectInitializer);

};

