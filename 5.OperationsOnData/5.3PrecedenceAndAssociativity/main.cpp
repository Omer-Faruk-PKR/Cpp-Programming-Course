#include <iostream>

int main(){

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};
        
    int result = a + b * c -d/e -f + g; //  6 +  24  -   3 - 2 + 5
    
    std::cout << "result : " << result << std::endl;

    result = a/b*c +d - e + f;  //   16 + 9 - 3 + 2
    std::cout << "result : " << result << std::endl;

    result = (a + b) * c -d/e -f + g; // 72-3-2+5
    std::cout << "result () : " << result << std::endl;

    std::cout << "-    -   -   -   -   -    -   -   -   -" << std::endl;

    int value = 5;
    std::cout << "value++ : " << value++ <<" value : " <<value<<std::endl;

    value = 5;
    std::cout << "++value : " << ++value <<" value : " <<value<<std::endl;

    value = 5;
    std::cout << "--value : " << --value << " value++ : " << value++ << " ++value : " << ++value<< std::endl;

    // there is no value** or //value etc. Only available for + and -

    return 0;
}