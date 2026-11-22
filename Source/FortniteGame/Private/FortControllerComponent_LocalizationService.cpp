#include "FortControllerComponent_LocalizationService.h"

UFortControllerComponent_LocalizationService::UFortControllerComponent_LocalizationService(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortControllerComponent_LocalizationService::ServerRequestLocalizationDocument_Implementation(const FString& InDocumentID, const FString& InLocale) {
}
bool UFortControllerComponent_LocalizationService::ServerRequestLocalizationDocument_Validate(const FString& InDocumentID, const FString& InLocale) {
    return true;
}

void UFortControllerComponent_LocalizationService::ClientLoadLocalizationDocument_Implementation(const FReplicatedLocalizedDocument Document) {
}


