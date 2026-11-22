#include "FortConversationTaskNode.h"

UFortConversationTaskNode::UFortConversationTaskNode() {
}

TSoftObjectPtr<UObject> UFortConversationTaskNode::GetTaskIcon() const {
    return NULL;
}

TSoftObjectPtr<USoundBase> UFortConversationTaskNode::GetHoverChoiceSound() const {
    return NULL;
}

TSoftObjectPtr<USoundBase> UFortConversationTaskNode::GetChoiceSound() const {
    return NULL;
}


