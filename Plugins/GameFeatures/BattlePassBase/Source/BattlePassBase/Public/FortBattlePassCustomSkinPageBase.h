#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "BattlePassSubPageInterface.h"
#include "FortBattlePassCustomSkinPageBase.generated.h"

class UBattlePassEnabledInputData;
class UFortDynamicEntryBox;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPASSBASE_API UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget, public IBattlePassSubPageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* FortDynamicEntryBox_Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattlePassEnabledInputData* EquipEnabledData;
    
public:
    UFortBattlePassCustomSkinPageBase();


    // Fix for true pure virtual functions not being implemented
};

