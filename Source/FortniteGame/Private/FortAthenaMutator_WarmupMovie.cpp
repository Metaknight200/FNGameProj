#include "FortAthenaMutator_WarmupMovie.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_WarmupMovie::AFortAthenaMutator_WarmupMovie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->MovieLengthSeconds = 0.00f;
    this->bServerMovieStart = false;
    this->MovieWidget = NULL;
    this->SkydiveTransitionMusic = NULL;
    this->WarmupMovieMix = NULL;
    this->WaitingScreen = NULL;
    this->SpawnEffectClass = NULL;
    this->MediaPlayer = NULL;
}

void AFortAthenaMutator_WarmupMovie::ShowMovieWidget(UCommonActivatablePanelLegacy* InMovieWidget, UMediaPlayer* InMediaPlayer) {
}



void AFortAthenaMutator_WarmupMovie::OnMediaClosedOrEndReached() {
}

void AFortAthenaMutator_WarmupMovie::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_WarmupMovie, bServerMovieStart);
}


