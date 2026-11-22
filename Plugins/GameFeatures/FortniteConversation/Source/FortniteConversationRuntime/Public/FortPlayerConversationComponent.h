#pragma once
#include "CoreMinimal.h"
#include "GiftUINotificationInfo.h"
#include "Blueprint/UserWidgetPool.h"
#include "FortConversationParticipantComponent.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerConversationComponent.generated.h"

class AFortPawn;
class AFortWeapon;
class UFortNonPlayerConversationParticipantComponent;
class UUserWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITECONVERSATIONRUNTIME_API UFortPlayerConversationComponent : public UFortConversationParticipantComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DialogWidgetSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DialogMarkerSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MobileDialogWidgetSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DialogWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DialogMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreetSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconVisibilityRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbortConversationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool DialogWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UFortNonPlayerConversationParticipantComponent*, UUserWidget*> ComponentToIndicator;
    
public:
    UFortPlayerConversationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestServerAbortConversation();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleWaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleDBNOChanged(AFortPawn* Pawn, bool bIsDBNO);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveConversationGiftUINotification(const FGiftUINotificationInfo& ConversationGiftUINotification);
    
};

