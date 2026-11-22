#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveVector.h"
#include "Curves/CurveFloat.h"
#include "AudioCurveInfo.h"
#include "EVectorCurveFloat.h"
#include "EVectorCurveType.h"
#include "FortAudioCurveVector.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, DefaultToInstanced)
class UFortAudioCurveVector : public UCurveVector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ExternalCurves[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCurveInfo> AudioCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCurveInfo> OriginalAudioCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCurveInfo> ModifiedAudioCurves;
    
public:
    UFortAudioCurveVector();

    UFUNCTION(BlueprintCallable)
    void SetActiveCurves(EVectorCurveType CurveType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAudioCurveVector();
    
    UFUNCTION(BlueprintCallable)
    void ImportFloatCurve(EVectorCurveFloat Element, UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    void ImportAttenuationCurve(EVectorCurveFloat Element, UPARAM(Ref) FRuntimeFloatCurve& Curve, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLargestMaxDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAudioCurveVectorValue(const float InTime) const;
    
    UFUNCTION(BlueprintCallable)
    void ExportCurves(EVectorCurveType CurveType);
    
public:
    virtual TArray<FRichCurveEditInfoConst> GetCurves() const override {
        return {FRichCurveEditInfoConst(&FloatCurves[0], "X"), FRichCurveEditInfoConst(&FloatCurves[1], "Y"), FRichCurveEditInfoConst(&FloatCurves[2], "Z")};
    }
    virtual TArray<FRichCurveEditInfo> GetCurves() override {
        return {FRichCurveEditInfo(&FloatCurves[0], "X"), FRichCurveEditInfo(&FloatCurves[1], "Y"), FRichCurveEditInfo(&FloatCurves[2], "Z")};
    }
    virtual bool IsValidCurve(FRichCurveEditInfo Info) override {
        return Info.CurveToEdit == &FloatCurves[0] || Info.CurveToEdit == &FloatCurves[1] || Info.CurveToEdit == &FloatCurves[2];
    }
};

