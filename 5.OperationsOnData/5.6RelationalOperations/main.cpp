#include <iostream>

int main(){

    int num1 {10};
    int num2 {50};

    std::cout<<"number1 : "<< num1<<std::endl;
    std::cout<<"number2 : "<< num2<<std::endl;

    std::cout<<std::boolalpha;    // gives true - false for booleans
    std::cout<< "number1 < number 2  : "<< (num1<num2) <<std::endl;
    std::cout<< "number1 > number 2  : "<< (num1>num2) <<std::endl;
    std::cout<< "number1 <= number 2 : "<< (num1<=num2) <<std::endl;
    std::cout<< "number1 >= number 2 : "<< (num1>=num2) <<std::endl;
    std::cout<< "number1 == number 2 : "<< (num1==num2) <<std::endl;
    std::cout<< "number1 != number 2 : "<< (num1!=num2) <<std::endl;


    return 0;
}