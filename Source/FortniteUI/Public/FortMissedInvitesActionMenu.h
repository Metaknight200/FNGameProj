#pragma once
#include "CoreMinimal.h"
#include "SocialActionMenu.h"
#include "FortMissedInvitesActionMenu.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissedInvitesActionMenu : public USocialActionMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_NeverShowAgain;
    
public:
    UFortMissedInvitesActionMenu();

};

