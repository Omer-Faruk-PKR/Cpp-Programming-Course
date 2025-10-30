#include <iostream>

int main(){
    int num1{25};
    int num2{10};
    bool green {true};
    bool red = false;
    bool police_Stop{true};
/*
    bool result = (num1 < num2);
    std::cout << std::boolalpha << "result : " << result << std::endl;

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;

    if(result == true){
        std::cout << num1 << " is less than " << num2 << std::endl;
    }

    if(!(result == true)){
        std::cout << num1 << " is NOT less than " << num2 <<std::endl;
    }

    // if - else command

    if(result){
        std::cout << num2 << " is greater than " << num1 << std::endl;
    }else{
        std::cout << num2 << " is smaller than " << num1 << std::endl;
    
    }
*/

/*
    // nested if statements
    if (green){
        if(police_Stop){
            std::cout << " STOP! "<< std::endl;
        }else{
            std::cout << " PASS! "<< std::endl;
        }
    }
*/

    //bitwise operations
    if(green && !police_Stop){
        std::cout << "GO!" << std::endl;
    }else{
        std::cout << "STOP!" << std::endl;
    }

}