#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "SpecialEventScriptMeshActor.generated.h"

class UMeshNetworkComponent;

UCLASS(Blueprintable, Config=Game)
class ASpecialEventScriptMeshActor : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RootStartTime, meta=(AllowPrivateAccess=true))
    FDateTime RootStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshNetworkComponent* MeshNetworkComponent;
    
public:
    ASpecialEventScriptMeshActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RootStartTime();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MeshRootStartEvent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MeshRootResetEvent();
    
};

