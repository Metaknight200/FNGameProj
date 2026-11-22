#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMiniMapComponentDiscoverableVisibility.h"
#include "FortMiniMapComponent.h"
#include "MiniMapComponentDiscoverable_OnPlayerVisibilityChangedDelegate.h"
#include "FortMiniMapComponent_Discoverable.generated.h"

class AFortPlayerController;
class UObject;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMiniMapComponent_Discoverable : public UFortMiniMapComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniMapComponentDiscoverable_OnPlayerVisibilityChanged OnPlayerVisibilityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMiniMapComponentDiscoverableVisibility DefaultVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultVisibilityCanChangeAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NotDiscoveredIconScale, meta=(AllowPrivateAccess=true))
    FVector2D NotDiscoveredIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NotDiscoveredIcon, meta=(AllowPrivateAccess=true))
    UTexture2D* NotDiscoveredIcon;
    
public:
    UFortMiniMapComponent_Discoverable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVisibilityForPlayer(AFortPlayerController* PlayerController, EMiniMapComponentDiscoverableVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniMapNotDiscoveredIconScale(const FVector2D& IconScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniMapDiscoveredIconScale(const FVector2D& IconScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniMapDiscoveredIcon(UObject* MiniMapIcon);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDefaultVisibility(const EMiniMapComponentDiscoverableVisibility InVisibility, const bool bClearAllPlayerVisibilityOverrides);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NotDiscoveredIconScale();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NotDiscoveredIcon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMiniMapComponentDiscoverableVisibility GetVisibilityForPlayer(const AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMiniMapComponentDiscoverableVisibility GetPlayersSetVisibility(const AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetDefaultVisibilityCanChangeAtRuntime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMiniMapComponentDiscoverableVisibility GetDefaultVisibility();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableDefaultVisibilityCanChangeAtRuntime();
    
};

