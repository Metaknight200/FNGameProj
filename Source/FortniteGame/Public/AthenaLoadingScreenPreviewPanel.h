#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "AthenaLoadingScreenPreviewPanel.generated.h"

class UAthenaLoadingScreenItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UAthenaLoadingScreenPreviewPanel : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition;
    
    UAthenaLoadingScreenPreviewPanel();

};

