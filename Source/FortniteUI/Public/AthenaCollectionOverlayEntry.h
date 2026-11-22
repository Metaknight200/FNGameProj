#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaCollectionOverlayEntry.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionOverlayEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EmptyDisplayNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayName;
    
public:
    UAthenaCollectionOverlayEntry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDisplayNameSet(const FString& DisplayName);
    
};

