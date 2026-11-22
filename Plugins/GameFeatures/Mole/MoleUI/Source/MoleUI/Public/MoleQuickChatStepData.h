#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMoleQuickChatPreviousState.h"
#include "EMoleQuickChatTokenState.h"
#include "MoleQuickChatStepData.generated.h"

USTRUCT(BlueprintType)
struct FMoleQuickChatStepData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequired;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoleQuickChatTokenState TokenType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMoleQuickChatPreviousState> PreviousTokenStates;
    
    MOLEUI_API FMoleQuickChatStepData();
};

