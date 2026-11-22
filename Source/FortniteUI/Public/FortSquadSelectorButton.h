#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "HomebaseSquad.h"
#include "Templates/SubclassOf.h"
#include "FortSquadSelectorButton.generated.h"

class UFortSquadManagementScreenBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadSelectorButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSquadManagementScreenBase> SquadManagementScreenType;
    
    UFortSquadSelectorButton();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const;
    
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadToManageBP(const FName& SquadId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentSquadSetBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIdOfSquadToManageBP() const;
    
};

