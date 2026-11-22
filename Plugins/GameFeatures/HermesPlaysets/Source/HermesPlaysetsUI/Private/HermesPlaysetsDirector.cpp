#include "HermesPlaysetsDirector.h"

AHermesPlaysetsDirector::AHermesPlaysetsDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AddItemDefinition = NULL;
    this->NumCookingImages = 0;
    this->NumLoadingImages = 0;
}

bool AHermesPlaysetsDirector::RequestPlaysetFromCode(const FString& InCode, const FString& InProjectId, const FString& InTitleName, AFortPlayerControllerAthena* InFortPlayerControllerAthena) {
    return false;
}

bool AHermesPlaysetsDirector::RequestLinkCodePreviewFromCode(const FString& InCode, AFortPlayerControllerAthena* InFortPlayerControllerAthena) {
    return false;
}

void AHermesPlaysetsDirector::OnNewLinkCodeChanged(const TArray<FString>& UpdatedLinkCodes) {
}

bool AHermesPlaysetsDirector::LoadLinkCodeMetaData(const FString& InLinkCode, const FString& InProjectId, AFortPlayerControllerAthena* InFortPlayerControllerAthena) {
    return false;
}




void AHermesPlaysetsDirector::HandlePlaysetDownloadedSuccess(bool bSuccess) {
}

bool AHermesPlaysetsDirector::CanAddProject() {
    return false;
}

bool AHermesPlaysetsDirector::CanAddLinkCode(const FString& InLinkCode) const {
    return false;
}


