#include <iostream>
#include <iomanip>

int main(){

    float num1 {1.12345678901234567890f};           //precision= 7
    double num2 {1.12345678901234567890};           //precision= 15
    long double num3 {1.12345678901234567890L};     //precision= 15+

    // precision
    std::cout<< std::setprecision(20) <<std::endl;
    std::cout<< "num1 : "<< num1 << std::endl;
    std::cout<< "num2 : "<< num2 << std::endl;
    std::cout<< "num3 : "<< num3 << std::endl;

    std::cout<< "num1 : "<< num1 << std::endl;

    std::cout<< "-  -   -   -   -   -   -   -" <<std::endl;

    // sizes
    std::cout<< "size of float : "<< sizeof(float)<<std::endl;
    std::cout<< "size of double : "<< sizeof(double)<<std::endl;
    std::cout<< "size of long double : "<< sizeof(long double)<<std::endl;

    std::cout<< "-  -   -   -   -   -   -   -" <<std::endl;

    // Float problems: The precision is usually too limited
    float num4 {192400023.0f};    // Error: number will chop off
    double num5 {192400023.0};    // Thats better (btw letter f must be dropped for double declaration)

    std::cout<< "num4 : "<< num4 << std::endl;
    std::cout<< "num5 : "<< num5 << std::endl;

    std::cout<< "-  -   -   -   -   -   -   -" <<std::endl;

    double num6 {192400023};    
    double num7 {1.92400023e8}; 
    double num8 {1.924e8};      //00023 can be omitted

    double num9 {0.00000000003498}; 
    double num10 {3.4983e-11}; 

    std::cout<< "num6 : "<< num6 << std::endl;
    std::cout<< "num7 : "<< num7 << std::endl;
    std::cout<< "num8 : "<< num8 << std::endl;
    std::cout<< "num9 : "<< num9 << std::endl;
    std::cout<< "num10 : "<< num10 << std::endl;

    std::cout<< "-  -   -   -   -   -   -   -" <<std::endl;

    // infinity
    double number11 {5.6};
    double number12 {};     // initialized to 0
    double number13 {};     // initialized to 0

    double result { number11 / number12 };

    std::cout<< "number11" << " / " << "number12" << " yields " << result << std::endl;
    std::cout<< result << " + " << number11 << " yields " << result + number11 << std::endl;

    // NaN
    result = number12 / number13;

    std::cout<< number12 << "/" << number13 << "=" << result << std::endl;

 
    return 0;
}