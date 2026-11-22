#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortExpeditionVehicleTileItemWidget.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionVehicleTileItemWidget : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> SquadId;
    
public:
    UFortExpeditionVehicleTileItemWidget();


    // Fix for true pure virtual functions not being implemented
};

