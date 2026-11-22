#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MoleQuickChatMessageItem.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class UMoleQuickChatMessageItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    UMoleQuickChatMessageItem();

};

