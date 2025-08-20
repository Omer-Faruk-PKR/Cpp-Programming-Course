#include <iostream>

int main(){

    char charac1 {'H'};
    char charac2 {'E'};
    char charac3 {'Y'};

    std::cout<<charac1<<std::endl;
    std::cout<<charac2<<std::endl;
    std::cout<<charac3<<std::endl;

    std::cout<<"- - - - - - - - - - - -"<<std::endl;

    char value = 65;    // not 65 but ASCII Character code for 'A'

    std::cout<<"value: "<<value<<std::endl;                             // 'A
    std::cout<<"value(int): "<< static_cast<int>(value) <<std::endl;    // 65

    return 0;
}