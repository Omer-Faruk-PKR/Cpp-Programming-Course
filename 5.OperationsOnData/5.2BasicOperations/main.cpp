#include <iostream>

int main(){

    // addition
    int num1{2};
    int num2{11};

    int result = num1 + num2;
    std::cout<<"num1 + num2 result : "<<result<<std::endl;

    // subtraction
    result = num2 - num1;
    std::cout<<"num2 - num1 result : "<<result<<std::endl;

    // multiplication
    result = num1 * num2;
    std::cout<<"num1 * num2 result : "<<result<<std::endl;

    // division
    result = num1 / num2;
    std::cout<<"num1 / num2 result : "<<result<<std::endl;
    result = num2 / num1;
    std::cout<<"num2 / num1 result : "<<result<<std::endl;

    //modulus
    result = num2 % num1;
    std::cout<<"num2 '%' num1 result : "<<result<<std::endl;
    result = num1 % num2;
    std::cout<<"num2 '%' num1 result : "<<result<<std::endl;


    return 0;
}