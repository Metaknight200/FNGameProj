#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortAffilateModal.generated.h"

class UCommonButtonLegacy;
class UEditableText;
class UListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAffilateModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* AcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* AffiliateKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* AffiliateSuggestionList;
    
    UFortAffilateModal();

};

