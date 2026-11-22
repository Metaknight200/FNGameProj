#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlayerSurveyAnswer.h"
#include "FortniteGameEditorDelegateStubs.h"
#include "FortPlayerSurveyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyBase : public UObject {
    GENERATED_BODY()
public:
    using FFortPlayerSurveyItemChangedInternalDelegate = ::FFortPlayerSurveyItemChangedInternalDelegate;
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyFinished OnSurveyFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyItemChangedInternalDelegate OnAnswerChangedDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnswer> Answers;
    
    UFortPlayerSurveyBase();

};

