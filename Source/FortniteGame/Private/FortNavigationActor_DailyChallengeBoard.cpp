#include "FortNavigationActor_DailyChallengeBoard.h"
#include "Components/StaticMeshComponent.h"

AFortNavigationActor_DailyChallengeBoard::AFortNavigationActor_DailyChallengeBoard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->S_NoteCard_Top = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_TopNotecard"));
    this->S_NoteCard_Middle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_MiddleNotecard"));
    this->S_NoteCard_Bottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_BottomNotecard"));
    this->S_NoteCard_Bottom->SetupAttachment(RootComponent);
    this->S_NoteCard_Middle->SetupAttachment(RootComponent);
    this->S_NoteCard_Top->SetupAttachment(RootComponent);
}


