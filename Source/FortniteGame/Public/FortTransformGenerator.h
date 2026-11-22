#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TransformGeneratorRequest.h"
#include "TransformGeneratorResult.h"
#include "FortTransformGenerator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortTransformGenerator : public UObject {
    GENERATED_BODY()
public:
    UFortTransformGenerator();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GenerateOutputTransformInternal(const FTransformGeneratorRequest& RequestIn, FTransformGeneratorResult& ResultOut) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GenerateOutputTransform(const FTransformGeneratorRequest& RequestIn, FTransformGeneratorResult& ResultOut) const;
    
};

