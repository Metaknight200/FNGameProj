#pragma once
#include "CoreMinimal.h"
#include "ObjectCostAccountantFactory.h"
#include "JsonObjectCostAccountantFactory.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class UJsonObjectCostAccountantFactory : public UObjectCostAccountantFactory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
public:
    UJsonObjectCostAccountantFactory();

};

