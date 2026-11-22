#pragma once
#include "CoreMinimal.h"
#include "EPathTestQueryType.generated.h"

UENUM(BlueprintType)
namespace EPathTestQueryType {
    enum Type {
        NavmeshRaycast2D,
        HierarchicalQuery,
        RegularPathFinding,
    };
}

