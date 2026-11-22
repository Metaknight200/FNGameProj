#pragma once
#include "CoreMinimal.h"
#include "EFortActivityValidationResult.h"
#include "FortTabButtonLabelInfo.h"
#include "FortTabInterface.h"
#include "Types/SlateEnums.h"
#include "FortActivityView.h"
#include "FortActivitySearchView.generated.h"

class UEditableText;
class UFortGameActivityProvider;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivitySearchView : public UFortActivityView, public IFortTabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_IslandLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameActivityProvider* ActivityProvider;
    
public:
    UFortActivitySearchView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivityValidated(const EFortActivityValidationResult ValidateResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivityClear();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleTextChanged(const FText& Text);
    

    // Fix for true pure virtual functions not being implemented
};

