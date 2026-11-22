#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "HUDWidgetBehavior.generated.h"

class UFortMobileHUDWidgetBehaviorExtension;
class UFortMobileHudWidgetContentComponent;

UCLASS(Abstract, Blueprintable)
class FORTNITEUI_API UHUDWidgetBehavior : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HUDLayoutToolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileHudWidgetContentComponent*> HUDWidgetContentComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FString> CustomPropertyDefaultOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileHUDWidgetBehaviorExtension*> BehaviorExtensions;
    
public:
    UHUDWidgetBehavior();

};

