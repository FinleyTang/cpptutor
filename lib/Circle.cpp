//
// Created by ftang on 2023/11/15.
//

#include "../include/Circle.h"

float Circle::getarea() {
    return 3.14*r*r;
}

void Circle::setr(float r0) {
    r = r0;
}

