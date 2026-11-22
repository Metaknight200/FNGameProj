#pragma once
#include "CoreMinimal.h"
#include "DynamicHUDDirectorBase.h"
#include "GameplayTagContainer.h"
#include "MoleAbilityUIData.h"
#include "MoleLocationData.h"
#include "MolePlayerUIData.h"
#include "Templates/SubclassOf.h"
#include "MoleUIDirector.generated.h"

class AMoleVotingPresentationManager;
class APlayerState;
class UDataTable;
class UDynamicHUDScene;
class UMoleEnemyAbilityWidgetComponent;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class AMoleUIDirector : public ADynamicHUDDirectorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicHUDScene*> LobbyStateScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicHUDScene*> VotingStateScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicHUDScene*> QuickChatScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicHUDScene* AllyScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicHUDScene* EnemyScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicHUDScene* GhostScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMoleVotingPresentationManager> VotingSummaryPresentationManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMoleVotingPresentationManager* VotingSummaryPresentationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMoleEnemyAbilityWidgetComponent> EnemyAbilitiesMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyAbilityUIDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LocationDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerUIInfoDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDynamicHUDScene* RoleScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoleEnemyAbilityWidgetComponent* EnemyAbilityMenuComponent;
    
public:
    AMoleUIDirector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool GetMolePlayerUIData(APlayerState* PlayerState, int32& OutPlayerNUmber, FMolePlayerUIData& OutPlayerUIData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetMoleLocationData(const UObject* WorldContextObject, const FGameplayTag& LocationTag, FMoleLocationData& OutLocationData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetMoleEnemyAbilityUIData(const UObject* WorldContextObject, const FGameplayTag& SabotageTag, FMoleAbilityUIData& OutEnemyAbilityUIData);
    
};

