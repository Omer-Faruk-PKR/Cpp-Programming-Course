#include <iostream>

int main(){
/*
    int number {22}; //stack

    int * p_number = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning address : " << std::endl;
    std::cout << "number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;

    int * p_number1;    // uninitialized pointer, contains junk address
    int number1 {12};
    p_number1 = &number1;   // make it point to a valid address
    std::cout << std::endl;
    std::cout << "uninitialized pointer : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;  
*/

/*
    // bad example
    // writing into unitilialized pointer through dereference
    int *p_number2;     // contains junk address : could be anything

    std::cout << "is this where program fails?" << std::endl;

    *p_number2 = 55;    // writing into junk address : bad!
    std::cout << std::endl;
    std::cout << "writing into unitilialized pointer through dereference" << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl;
    std::cout << "*p_number2 : " << *p_number2 << std::endl;
*/

/*
    // initializing pointer to null
    // int *p_number3{nullptr};     // also works
    int * p_number3 {}; // initialized with pointer equivalent of zero : nullptr..
                        //.. a pointer pointing nowhere
    *p_number3 = 33;    // writing into a pointer pointing nowhere : bad, crash!

    std::cout << "is this where program fails?" << std::endl;

    std::cout << std::endl;
    std::cout << "reading and writting through nullptr : " << std::endl;
*/

/*
    // Dynamic heap memory
    int *p_number4{nullptr};
    p_number4 = new int; // Dynamically allocate space for a single int on the heap
                         // This memory belongs to our program from now on.
                         // The system cant use it for anything else, until we return it.
                         // After this line executes, we'll have a valid memory location allocated.
                         // The size of the allocated memory will be such that it can store the type pointed to by the pointer.

    *p_number4 = 77; // writing into dynamically allocated memory
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory : " << std::endl;
    std::cout << "*p_number4 : " << *p_number4 << std::endl;

    delete p_number4;   // deletes the pointer which is in the dynamically allocated memory
                        // return memory to the OS

    *p_number4 = 39;
    p_number4 = nullptr;    // recommended move, safer programming
*/

    // it is also possible to initialize the pointer with a valid address up on declaration.
    // not with a nullptr
    int *p_number5{ new int};         // memory location contains junk value
    int *p_number6{ new int (22) };   // use direct initialization
    int *p_number7{ new int { 23 } }; // use uniform initialization

    std::cout << std::endl;
    std::cout << "initialized with valid memory address at declaration : " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl;  //junk value

    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl;  

    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl; 
    
    // remember to release the memory
    delete p_number5;
    p_number5 = nullptr;
    
    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;


    // can reuse pointers
    p_number5 = new int(81);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;
   
    delete p_number5;
    p_number5 = nullptr;
    
    //std::cout << " Program is ending well " << std::endl;

    // calling delete twice on a pointer : bad!
    p_number5 = new int(99);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    delete p_number5;
    delete p_number5;   // careful !

    std::cout << " Program is ending well " << std::endl;


    return 0;

}