#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MoleQuickChatMessageData.generated.h"

USTRUCT(BlueprintType)
struct FMoleQuickChatMessageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SelfMessage;
    
    MOLEUI_API FMoleQuickChatMessageData();
};

