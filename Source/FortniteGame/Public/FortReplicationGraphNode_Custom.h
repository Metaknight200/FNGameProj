#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "FortReplicationGraphNode_Custom.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortReplicationGraphNode_Custom : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UFortReplicationGraphNode_Custom();

};

