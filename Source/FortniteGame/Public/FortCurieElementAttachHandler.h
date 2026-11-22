#pragma once
#include "CoreMinimal.h"
#include "CurieElementAttachHandler.h"
#include "Engine/DataTable.h"
#include "FortCurieElementDamageSourceInterface.h"
#include "FortCurieStateSuggestionData.h"
#include "FortCurieElementAttachHandler.generated.h"

UCLASS(Blueprintable)
class UFortCurieElementAttachHandler : public UCurieElementAttachHandler, public IFortCurieElementDamageSourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCurieStateSuggestionData> AttachmentSuggestedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActAsDmgSrcDirectly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageDataTableRowHandle;
    
public:
    UFortCurieElementAttachHandler();


    // Fix for true pure virtual functions not being implemented
};

