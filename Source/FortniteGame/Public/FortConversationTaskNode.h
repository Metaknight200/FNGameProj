#pragma once
#include "CoreMinimal.h"
#include "ConversationTaskNode.h"
#include "GameplayTagContainer.h"
#include "FortConversationTaskNode.generated.h"

class UObject;
class USoundBase;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode : public UConversationTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NodeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DefaultDisplayAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> SoftTaskIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ChoiceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> HoverChoiceSound;
    
public:
    UFortConversationTaskNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UObject> GetTaskIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USoundBase> GetHoverChoiceSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USoundBase> GetChoiceSound() const;
    
};

