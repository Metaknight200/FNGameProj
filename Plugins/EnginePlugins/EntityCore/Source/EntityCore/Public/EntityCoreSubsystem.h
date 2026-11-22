#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EntityComponentContainer.h"
#include "EntityCoreSubsystem.generated.h"

class UEntity;
class UEntityComponent;

UCLASS(Blueprintable)
class ENTITYCORE_API UEntityCoreSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FEntityComponentContainer> ComponentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEntityComponent*> ComponentArray;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, UEntity*> Entities;
    
public:
    UEntityCoreSubsystem();

};

