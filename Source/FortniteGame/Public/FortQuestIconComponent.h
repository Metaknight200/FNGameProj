#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortMapIconDefinition.h"
#include "TInteractionType.h"
#include "FortQuestIconComponent.generated.h"

class AFortPlayerController;
class IFortInteractInterface;
class UFortInteractInterface;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortQuestIconComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControlVisibilityFromOwnerQuestObjectiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractiveStateRequiredForVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TInteractionType> ExplicitInteractionTypeToTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMapIconDefinition MapIconData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortInteractInterface> CachedOwnerInteractInterface;
    
public:
    UFortQuestIconComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibility(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewDistanceRadius(const float ViewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetIconVisibilityOnMiniMap(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIconVisibilityOnMap(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIconScale(const FVector2D& IconScale);
    
    UFUNCTION(BlueprintCallable)
    void SetIconLocationOffset(const FVector& LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(UObject* MiniMapIcon);
    
private:
    UFUNCTION(BlueprintCallable)
    void PerformVisibilityDistanceCheck();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerQuestReady(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerQuestNotReady(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCustomUpdateObjective(AFortPlayerController* PlayerController, int32 AchievedCount, int32 RequiredCount);
    
};

