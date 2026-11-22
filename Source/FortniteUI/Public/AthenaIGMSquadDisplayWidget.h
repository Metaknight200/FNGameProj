#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaIGMSquadDisplayWidget.generated.h"

class UAthenaIGMSquadMemberWidget;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaIGMSquadDisplayWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaIGMSquadMemberWidget* LocalPlayerSquadMemberWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaIGMSquadMemberWidget*> SquadMemberWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_SquadMemberWidgets;
    
public:
    UAthenaIGMSquadDisplayWidget();

};

