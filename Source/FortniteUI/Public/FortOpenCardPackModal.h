#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "RequestOpenCardPackDelegateDelegate.h"
#include "FortOpenCardPackModal.generated.h"

class UCommonButtonLegacy;
class UCommonListView;

UCLASS(Blueprintable, EditInlineNew)
class UFortOpenCardPackModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* CardPackList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* OpenAllButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* CancelButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestOpenCardPackDelegate BPOnRequestOpenCardPack;
    
public:
    UFortOpenCardPackModal();

};

