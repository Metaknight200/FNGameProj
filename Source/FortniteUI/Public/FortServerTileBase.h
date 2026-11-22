#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserListEntry.h"
#include "FortServerTileBase.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortServerTileBase : public UCommonButtonLegacy, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ServerWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Launch;
    
public:
    UFortServerTileBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchButtonEnableChanged(bool bEnableValue);
    

    // Fix for true pure virtual functions not being implemented
};

