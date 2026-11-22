#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPersistence.generated.h"

class UVkPersistence;

UCLASS(Blueprintable)
class UFortPersistence : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVkPersistence* Persistence;
    
public:
    UFortPersistence();

};

