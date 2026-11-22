#pragma once
#include "CoreMinimal.h"
#include "CurieElementInteractWithContainerHandler.h"
#include "Engine/DataTable.h"
#include "FortCurieElementDamageSourceInterface.h"
#include "FortCurieElementInteractWithContainerHandler.generated.h"

UCLASS(Blueprintable)
class UFortCurieElementInteractWithContainerHandler : public UCurieElementInteractWithContainerHandler, public IFortCurieElementDamageSourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActAsDmgSrcDirectly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageDataTableRowHandle;
    
public:
    UFortCurieElementInteractWithContainerHandler();


    // Fix for true pure virtual functions not being implemented
};

