#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Engine/DataTable.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Styling/SlateBrush.h"
#include "CommonUISubsystemBase.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonUISubsystemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UCommonUISubsystemBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const FName& GamepadName) const;
    
};

