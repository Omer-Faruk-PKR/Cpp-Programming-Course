#include <iostream>

int main(){

    int value1 {10};
    int value2 {-300};

    std::cout << "int value1 : " << value1 << std::endl;
    std::cout << "int value2 : " << value2 << std::endl;

    std::cout << "size of int value1 : " << sizeof(value1) << std::endl 
              << "size of int value2 : " << sizeof(value2) << std::endl;

    //  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

    signed int value3 {10};
    signed int value4 {-300};

    std::cout << "size of signed int value3 : " << sizeof(value3) << std::endl 
              << "size of signed int value4 : " << sizeof(value4) << std::endl;

    //  -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

    //unsigned int value4 {-300};  // error: conflicting declaration
    unsigned int value5 {10};
    short value6 {10};
    long value7 {10};
    long long value8 {10};
    unsigned long long int value9 {10};

    std::cout << "size of unsigned int value5 : " << sizeof(value5) << std::endl;
    std::cout << "size of short value6 : " << sizeof(value6) << std::endl;
    std::cout << "size of long value7 : " << sizeof(value7) << std::endl;
    std::cout << "size of long long value8 : " << sizeof(value8) << std::endl;
    std::cout << "size of unsigned long long int value9 : " << sizeof(value9) << std::endl;
    

    return 0;
}