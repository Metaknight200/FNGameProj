#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "MoleAbilityUIData.h"
#include "MoleEnemyAbilityEntry.generated.h"

class UMoleEnemyAbilityOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleEnemyAbilityEntry : public UCommonButtonBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoleEnemyAbilityOverlay* Overlay_EnemyAbilities;
    
public:
    UMoleEnemyAbilityEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityDataReceived(FMoleAbilityUIData InAbilityUIData);
    

    // Fix for true pure virtual functions not being implemented
};

