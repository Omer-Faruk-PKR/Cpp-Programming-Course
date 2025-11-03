#include <iostream>

int main(){
    int max{};

    int a{15};
    int b{45};
/*
    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    if(a > b){
        max = a;
    }else{
        max = b;
    }

    std::cout << "max : " << max << std::endl;
*/

/*   Ternary operator shortens the code 
    max = (a > b)? a: b;   //ternary opraor

    std::cout << "max : " << max << std::endl;
*/

/*
    // error: operands to '?:' have different types 'int' and 'const char*'
    // the two variables should be in the same type
    max = (a > b)? a: "hello";   //ternary opraor

    std::cout << "max : " << max << std::endl;
*/

    return 0;

}