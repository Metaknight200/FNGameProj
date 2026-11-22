#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EventMessageTag.h"
#include "MoleRoleColor.generated.h"

class UDecalComponent;

UCLASS(Abstract, Blueprintable)
class AMoleRoleColor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag PeelyPartyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceEndPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
public:
    AMoleRoleColor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

