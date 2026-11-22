#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "EGameReadiness.h"
#include "FortTeamMemberEntryBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTeamMemberEntryBase : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UFortTeamMemberEntryBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMemberIsInFrontendChanged(bool bIsInFrontEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentMemberValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentMemberLocal() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentMemberInFrontend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameReadiness GetCurrentMemberGameReadiness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTeamMemberEstablished(bool bHasValidMember);
    
};

