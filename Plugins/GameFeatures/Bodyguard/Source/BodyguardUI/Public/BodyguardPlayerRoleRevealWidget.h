#pragma once
#include "CoreMinimal.h"
#include "BodyguardWidgetBase.h"
#include "BodyguardPlayerRoleRevealWidget.generated.h"

class UFortLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class UBodyguardPlayerRoleRevealWidget : public UBodyguardWidgetBase {
    GENERATED_BODY()
public:
    UBodyguardPlayerRoleRevealWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTeamVIPAvatarImage(uint8 TeamNum, UFortLazyImage* AvatarImageWidget) const;
    
};

