#include <iostream>

int main(){
    
    const size_t COUNT{10};
    size_t i{0}; // iterator decleration

    while( i < COUNT){
        std::cout << i << " : i love C++" << std::endl;
        ++i;  // incerementation
    }
    std::cout << "Loop done!" << std::endl;

    return 0;

}