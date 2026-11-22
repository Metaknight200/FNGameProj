#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EntityDataBackedComponent.h"
#include "EntityActorPlayerComponent.generated.h"

class APlayerController;
class APlayerState;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorPlayerComponent : public UEntityDataBackedComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerController> PlayerControllerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerState> PlayerStateCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerID;
    
public:
    UEntityActorPlayerComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

