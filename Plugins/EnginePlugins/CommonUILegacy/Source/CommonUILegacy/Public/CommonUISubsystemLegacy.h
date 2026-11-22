#pragma once
#include "CoreMinimal.h"
#include "CommonUISubsystemBase.h"
#include "CommonUISubsystemLegacy.generated.h"

class UCommonInputManagerLegacy;

UCLASS(Blueprintable)
class COMMONUILEGACY_API UCommonUISubsystemLegacy : public UCommonUISubsystemBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputSuspensionChanged, bool, bInputSuspended);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputSuspensionChanged OnInputSuspensionChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonInputManagerLegacy* CommonInputManager;
    
public:
    UCommonUISubsystemLegacy();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonInputManagerLegacy* GetInputManager() const;
    
};

