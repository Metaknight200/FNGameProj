#pragma once
#include "CoreMinimal.h"
#include "PlayerStateComponent.h"
#include "MoleQuickChatMessageInfo.h"
#include "MoleQuickChatMessageSummary.h"
#include "MoleQuickChatRawMessage.h"
#include "MoleQuickChatUIComponent.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleQuickChatUIComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MessagesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMoleQuickChatMessageInfo, float> MessageSpamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMoleQuickChatMessageSummary MessagesSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMoleQuickChatRawMessage> MessageLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeBetweenSameMessageSend;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedMessagesTable;
    
public:
    UMoleQuickChatUIComponent(const FObjectInitializer& ObjectInitializer);

};

