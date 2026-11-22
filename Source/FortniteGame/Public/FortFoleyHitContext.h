#pragma once
#include "CoreMinimal.h"
#include "SoundLibraryContext.h"
#include "EFortFoleyHitAudioType.h"
#include "FortFoleyHitContext.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortFoleyHitContext : public USoundLibraryContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFoleyHitAudioType::Type> HitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIs3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReceiver;
    
    UFortFoleyHitContext();

};

