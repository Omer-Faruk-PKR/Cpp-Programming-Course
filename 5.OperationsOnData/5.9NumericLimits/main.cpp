#include <iostream>
#include <limits>

int main(){

    std::cout << "The range for short is from " << std::numeric_limits<short>::min() 
    << " to " << std::numeric_limits<short>::max() << std::endl;

    std::cout << "The range for float is from " << std::numeric_limits<float>::min() 
    << " to " << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range for long double is from " << std::numeric_limits<long double>::min() 
    << " to " << std::numeric_limits<long double>::max() << std::endl;

    std::cout << "The range for bool is from " << std::numeric_limits<bool>::min() 
    << " to " << std::numeric_limits<bool>::max() << std::endl;


    std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;

    return 0;
}