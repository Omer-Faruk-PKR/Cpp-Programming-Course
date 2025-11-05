#include <iostream>

int main(){

/*
    for ( unsigned int i{0} ; i < 10 ; ++i){
        std::cout << i << " : i love c++" << std::endl;
    }

    std::cout << "Loop done!" << std::endl;
*/

/*
    // use size_t : a representation of some unsigned int for positive numbers [sizes]
    for (size_t i{0} ; i<10 ; ++i){
        std::cout << i << " : i love c++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    std:: cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
*/

/*
    // scope of the iterator
    for (size_t i{0} ; i<10 ; ++i){
        std::cout << i << " : i love c++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    // Compiler error: i is not in scope
    //std::cout << "i : " << i << std::endl;
*/

/*
    // iterator declated outside the loop
    size_t i{0}; // iterator defined outside

    for (i ; i<10 ; ++i){
        std: :cout << i << " : i love c++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
*/

/*
    size_t i{0}; // iterator defined outside

    // leave out the iterator declaration part
    for ( ; i<10 ; ++i){
        std::cout << i << " : i love c++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
*/

    // dont hard code values
    const size_t COUNT{10};

    for ( size_t i{0} ; i < COUNT ; ++i){
        std::cout << i << " : i love c++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    return 0;

}