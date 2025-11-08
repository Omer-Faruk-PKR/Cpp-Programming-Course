#include <iostream>

int main(){
/* 
    // declare array
    char message [5] {'H','e','l','l','o'};

    // print out the array through looping
    std::cout << "message : ";
    for ( auto c : message ){
        std::cout << c;
    }
    std::cout << std::endl;

    // change the character of in our array
    message[4] = 'l';

    // print out the array through looping
    std::cout << "message : ";
    for ( auto c : message ){
        std::cout << c;
    }
    std::cout << std::endl;
*/
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -
/*
    char message [5] {'H','e','l','l','o'};
    char message2 [6] {'H','e','l','l','o','\0'};

    std::cout <<  "message : " << message << std::endl;

    // with '\0' , u specify an end point to your array
    std::cout <<  "message : " << message2 << std::endl;
*/
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -
/*
    // if a character array is null terminated, its called as C-String
    char message [] {'H','e','l','l','o','\0'};
    char message2 [6] {'H','e','l','l','o'};
    char message3 [] {'H','e','l','l','o'}; // not a c string, theres not null character

    std::cout << "message : " << message << std::endl;
    std::cout << "sizeof(message) : " << sizeof(message) << std::endl;

    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;
*/
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -
/*
    // string literal
    // safer way to keep string
    // it has a '\0' in other words null terminated by default 
    char message [] {"Hello guys what's up?"};

    std::cout << "message : " << message << std::endl;
    std::cout << "sizeof(message) : " << sizeof(message) << std::endl;
*/
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -

    // cant safely print out arrays other than those of characters
    int numbers [] {1,2,3,4,5};
    std::cout << "numbers : " << numbers << std::endl;


    return 0;
}