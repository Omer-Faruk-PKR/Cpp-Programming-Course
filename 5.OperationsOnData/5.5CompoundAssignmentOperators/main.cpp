#include <iostream>

int main(){

    int value = 25;

    std::cout<<"The Value Is : "<<value<<std::endl;

    std::cout<<"value += 5 : "<<(value += 5)<<std::endl;
    value = 25;
    std::cout<<"value -= 5 : "<<(value -= 5)<<std::endl;
    value = 25;
    std::cout<<"value *= 5 : "<<(value *= 5)<<std::endl;
    value = 25;
    std::cout<<"value /= 5 : "<<(value /= 5)<<std::endl;
    value = 25;
    std::cout<<"value %= 5 : "<<(value %= 5)<<std::endl;

    return 0;
}