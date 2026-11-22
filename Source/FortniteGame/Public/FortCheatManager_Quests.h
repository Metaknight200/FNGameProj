#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManager_Quests.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Quests : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCheatManager_Quests();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TeleportToBountyTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendQuestEvent(FName Type, FString& TargetTag, FString& SourceTag, FString& ContextTag, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void RemoveSharedQuest(const FString& QuestName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PinQuest(const FString& QuestMcpId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogSquadSharedQuestData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogPinnedQuest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListActiveQuestContextTags();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GrantTransientQuest(const FString& QuestName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllQuestsByName(FString& QuestPartialName);
    
};

