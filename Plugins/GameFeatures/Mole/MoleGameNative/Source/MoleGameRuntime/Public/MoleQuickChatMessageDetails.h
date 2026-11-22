#pragma once
#include "CoreMinimal.h"
#include "MoleQuickChatMessageDetails.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMoleQuickChatMessageDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerC;
    
    MOLEGAMERUNTIME_API FMoleQuickChatMessageDetails();
};

