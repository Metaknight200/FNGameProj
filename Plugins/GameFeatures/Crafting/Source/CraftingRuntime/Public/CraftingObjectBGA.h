#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BuildingGameplayActor.h"
#include "FortInventoryOwnerInterface.h"
#include "CraftingObjectBGA.generated.h"

class AActor;
class AFortInventory;
class UPrimitiveComponent;
class USphereComponent;
class UUserWidget;
class UWidgetComponent;

UCLASS(Blueprintable)
class CRAFTINGRUNTIME_API ACraftingObjectBGA : public ABuildingGameplayActor, public IFortInventoryOwnerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent_InteractionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent_PotContents;
    
public:
    ACraftingObjectBGA(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void HandleInteractionRangeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
};

