#include <iostream>
#include "../include/Circle.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Circle circle;
    circle.setr(4.0);
    std::cout<<circle.getarea()<<std::endl;
    return 0;

}
