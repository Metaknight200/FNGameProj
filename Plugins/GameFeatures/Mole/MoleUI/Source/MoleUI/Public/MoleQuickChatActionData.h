#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MoleQuickChatMessageData.h"
#include "MoleQuickChatStepData.h"
#include "MoleQuickChatActionData.generated.h"

USTRUCT(BlueprintType)
struct FMoleQuickChatActionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OmitSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoleQuickChatStepData> Steps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoleQuickChatMessageData> Messages;
    
    MOLEUI_API FMoleQuickChatActionData();
};

