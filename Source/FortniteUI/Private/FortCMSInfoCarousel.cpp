#include "FortCMSInfoCarousel.h"
#include "EInputPriority.h"

UFortCMSInfoCarousel::UFortCMSInfoCarousel() {
    this->InputPriority = EInputPriority::Modal;
    this->Carousel = NULL;
    this->CarouselNavBar = NULL;
    this->AutoScrollInterval = 0.00f;
}

void UFortCMSInfoCarousel::NavigatePageRight() {
}

void UFortCMSInfoCarousel::NavigatePageLeft() {
}


