#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionListEntry.h"
#include "AthenaCollectionListEntryCharacter.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionListEntryCharacter : public UAthenaCollectionListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_IsDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_IsComplete;
    
public:
    UAthenaCollectionListEntryCharacter();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLocationsFoundSet(int32 NumFound, int32 NumAvailable, bool bAllFound);
    
};

