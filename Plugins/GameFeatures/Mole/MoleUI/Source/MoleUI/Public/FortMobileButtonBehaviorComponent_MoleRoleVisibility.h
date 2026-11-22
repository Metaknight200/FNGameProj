#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_Visibility.h"
#include "EMoleRole.h"
#include "Components/SlateWrapperTypes.h"
#include "FortMobileButtonBehaviorComponent_MoleRoleVisibility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortMobileButtonBehaviorComponent_MoleRoleVisibility : public UFortMobileButtonBehaviorComponent_Visibility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMoleRole, ESlateVisibility> RoleVisibility;
    
public:
    UFortMobileButtonBehaviorComponent_MoleRoleVisibility();

};

