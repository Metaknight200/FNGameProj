#pragma once
#include "CoreMinimal.h"
#include "CustomAccessoryHatReactiveMorphs.h"
#include "CustomCharacterAccessoryData.h"
#include "EFortCustomPartType.h"
#include "CustomCharacterFaceData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCustomCharacterFaceData : public UCustomCharacterAccessoryData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomPartType::Type> PartAttachedToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomAccessoryHatReactiveMorphs HatMorphData;
    
public:
    UCustomCharacterFaceData();

};

