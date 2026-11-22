#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectInteractionBehavior.h"
#include "PlaysetInfo.h"
#include "PlaysetPreview.generated.h"

class AStaticMeshActor;
class UMaterial;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPlaysetPreview : public UObjectInteractionBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* PreviewPlaysetStaticMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PlaysetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* PlaysetMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlaysetToPlace, meta=(AllowPrivateAccess=true))
    FPlaysetInfo PlaysetToPlace;
    
public:
    UPlaysetPreview(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdatePreviewMeshScale();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPreviewLocation(const FVector& NewPreviewLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlaysetToPlace();
    
};

