#include <iostream>
#include <cmath>

int main(){

    double weight { 7.5 };
    // floor
    std::cout << "weight rounded to floor is : " << std::floor(weight) << std::endl;
    // ceil
    std::cout << "weight rounded to ceil is : " << std::ceil(weight) << std::endl;

    double savings { -500 };
    // abs
    std::cout << "abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "abs of savings is : " << std::abs(savings) << std::endl;

    // exp : f(x) = e ^ x, where e = 2.71828
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is : " << exponential << std::endl;

    // pow
    std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is : " << std::pow(9,3) << std::endl;

    // log
    std::cout << "Log; to get 49, u would elevate e to the power of : " 
    << std::log(49) << std::endl;

    // log10
    std::cout << "Log; to get 1000, u would elevate 10 to the power of : " 
    << std::log10(1000) << std::endl;

    // sqrt
    std::cout << "The square root of 121 is : " << std::sqrt(121) << std::endl;

    // round 
    std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 rounded to : " << std::round(2.4) << std::endl;


    return 0;
}