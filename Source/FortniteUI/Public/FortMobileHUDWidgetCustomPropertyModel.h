#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDWidgetCustomPropertyModel.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UFortMobileHUDWidgetCustomPropertyModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleToTheUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyDevName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PropertyDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PropertyTag;
    
public:
    UFortMobileHUDWidgetCustomPropertyModel();

};

