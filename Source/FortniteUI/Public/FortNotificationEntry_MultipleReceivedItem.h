#pragma once
#include "CoreMinimal.h"
#include "FortNotificationEntry.h"
#include "FortNotificationEntry_MultipleReceivedItem.generated.h"

class UCommonTextBlock;
class UFortMultipleReceivedItemWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNotificationEntry_MultipleReceivedItem : public UFortNotificationEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWillReceiveBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultipleReceivedItemWidget* DisplayItem_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultipleReceivedItemWidget* DisplayItem_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultipleReceivedItemWidget* DisplayItem_3;
    
public:
    UFortNotificationEntry_MultipleReceivedItem();

};

