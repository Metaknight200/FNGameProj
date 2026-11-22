#include "ShowdownTournamentData.h"

FShowdownTournamentData::FShowdownTournamentData() {
    // Initialize reflected value fields omitted by the dump.
    this->Background_Left_Color = FLinearColor::Transparent;
    this->Background_Right_Color = FLinearColor::Transparent;
    this->Background_Text_Color = FLinearColor::Transparent;
    this->Base_Color = FLinearColor::Transparent;
    this->Highlight_Color = FLinearColor::Transparent;
    this->Poster_Fade_Color = FLinearColor::Transparent;
    this->Primary_Color = FLinearColor::Transparent;
    this->Secondary_Color = FLinearColor::Transparent;
    this->Shadow_Color = FLinearColor::Transparent;
    this->Title_Color = FLinearColor::Transparent;
    this->Pin_Score_Requirement = 0;
    this->AlertType = EFortTournamentAlertType::Warning;
}

