#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AlterationOption.h"
#include "EFortAlterationOptionType.h"
#include "Templates/SubclassOf.h"
#include "FortAlterationOptionsBase.generated.h"

class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UFortAlterableItem;
class UFortAlterationOption;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAlterationOptionsBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAlterationOption> AlterationOptionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* AlterationOptionButtons;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAlterableItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpgradeOptionExists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlterationOption UpgradeOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAlterationOption> RespecOptions;
    
public:
    UFortAlterationOptionsBase();

    UFUNCTION(BlueprintCallable)
    void ProcessAlterationOptions(bool bIntroAlterations);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemChanged(bool bIntroAlterations);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGenerateOption(EFortAlterationOptionType OptionType, UFortAlterationOption* OptionWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAlterationSlot() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleAlterationsOptionSelected(UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleAlterationsOptionHovered(UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoAlterationOptionsExist(EFortAlterationOptionType OptionType) const;
    
};

