#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "UObject/NoExportTypes.h"
#include "AthenaCollectionScreenContainerTabButton.generated.h"

class UCommonLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionScreenContainerTabButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImageSize_Mobile;
    
public:
    UAthenaCollectionScreenContainerTabButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowBang(bool bShow);
    
};

