#include <iostream>

int main(){
    
    // char * message {"Hello World!"};   // C++ forbids converting a string constant to 'char*'

    const char * message {"Hello World!"};

    std::cout<< "message : " << message << std::endl;

    //*message = 'B';  // compiler error
    std::cout<< "*message : " << *message << std::endl;

    // allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'T';
    std::cout<<"message1 : "<< message1<<std::endl;


    return 0;    
}   