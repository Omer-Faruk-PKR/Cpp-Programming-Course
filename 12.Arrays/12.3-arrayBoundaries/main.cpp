#include <iostream>

int main(){
    
    int numbers [] {1,2,3,4,5,6,7,8,9,0};

    // read beyond bounds: will read garbage or crash your program
    std::cout << "numbers[12] : " << numbers[12] << std::endl;

    // write beyond bounds. The compiler allows it but u dont own..
    // ..the memory at index12, so other programs may modify it your..
    // ..program may read bogus data at a later time. or u can even..
    // ..corrupt data used by other parts oof your program
    numbers[12] = 1000;
    std::cout << "numbers[12] : " << numbers[12] << std::endl;


    numbers[199999] = 1000;
    std::cout << "numbers[199999] : " << numbers[199999] << std::endl;
    std::cout << "u wont see this message since the program has crushed\n";

    // so try to stay in boundaries

    return 0;
}