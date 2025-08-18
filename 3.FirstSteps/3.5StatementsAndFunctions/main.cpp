#include <iostream>

int addNumbers( int first_param, int second_param ){

    int result = first_param + second_param;   
    return result;
}

int multiplyNumbers( int first_param, int second_param ){

    int result = first_param * second_param;
    return result;
}

int main(){

    int firstNum {13}; // statement
    int secondNum {7};

    std::cout<< "First number : " << firstNum << std::endl;
    std::cout<< "Second number : " << secondNum << std::endl;

    int sum = firstNum + secondNum;
    
    std::cout<< "Main Sum : " << sum <<std::endl;


    sum = addNumbers(14,99);

    std::cout<< "addNumbers Sum : " << sum <<std::endl;
    std::cout<< "addNumbers Sum : " << addNumbers(111,222) <<std::endl;

    std::cout<< "addNumbers Sum : " << multiplyNumbers(123,-9) <<std::endl;

    return 0;
}