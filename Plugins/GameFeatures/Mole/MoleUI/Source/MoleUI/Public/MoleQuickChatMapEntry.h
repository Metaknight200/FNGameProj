#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "GameplayTagContainer.h"
#include "MoleLocationData.h"
#include "MoleQuickChatMapEntry.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMoleQuickChatMapEntry : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocationTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_HerePin;
    
public:
    UMoleQuickChatMapEntry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCosmetics();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapDataRetrieved(const FMoleLocationData& LocationData);
    
};

