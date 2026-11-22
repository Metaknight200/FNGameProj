#include "SidekickReactionWidget.h"

USidekickReactionWidget::USidekickReactionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Animation_Fly = NULL;
    this->Animation_FlyRotate = NULL;
    this->Image_ReactionImage = NULL;
}

void USidekickReactionWidget::HandleReactionAnimationStarted() {
}

void USidekickReactionWidget::HandleReactionAnimationCompleted() {
}


