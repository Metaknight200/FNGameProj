#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MolePlayerItem.generated.h"

UCLASS(Blueprintable)
class UMolePlayerItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenIdentity;
    
    UMolePlayerItem();

};

