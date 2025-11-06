#include <iostream>

int main(){
    
    const int COUNT{10};
    size_t i{0};

    // its like REPEAT ... UNTIL command in KRL
    // first program runs do section, then checks while command
    // so if COUNT is 0, then output is = 0 : i love cpp
    do{
        std::cout << i << " : i love cpp" << std::endl;
        ++i;    //incrementation
    }while( i<COUNT );

    return 0;
    
}