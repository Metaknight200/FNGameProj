#pragma once
#include "CoreMinimal.h"
#include "FortReplicationGraphNode_Custom.h"
#include "MoleReplicationGraphNode.generated.h"

class APawn;

UCLASS(Blueprintable, NonTransient)
class UMoleReplicationGraphNode : public UFortReplicationGraphNode_Custom {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> AllPlayers;
    
public:
    UMoleReplicationGraphNode();

};

