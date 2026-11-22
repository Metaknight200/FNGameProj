#pragma once
#include "CoreMinimal.h"
#include "ControllerComponent.h"
#include "MolePlayerControllerComponent.generated.h"

class UDataTable;
class UFortPlayerInputSettings;
class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UMolePlayerControllerComponent : public UControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* MoleCoreInputComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerInputSettings* MoleKBMInputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerInputSettings* MoleControllerInputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BindingsDataTable;
    
public:
    UMolePlayerControllerComponent(const FObjectInitializer& ObjectInitializer);

};

