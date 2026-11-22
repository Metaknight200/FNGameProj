#pragma once
#include "CoreMinimal.h"
#include "DirectorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDirectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DirectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Instance;
    
    DYNAMICHUD_API FDirectorData();
};

