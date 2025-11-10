#include <iostream>

int main(){
/*    
    // declare and initialize pointer
    int * p_number {};  // will initialize with nullptr
    double* p_fractional_number{};

    //explicitly initialize with nullptr
    int * p_number1 {nullptr};
    double* p_fractional_number1{nullptr};

    // pointers to different variables are of the same size
    // pointers occupies 8 bytes of the memory
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;

    // it doesnt matter if u put the * close to data type or to variable name
    int*  p_number2{nullptr};
    int * p_number3{nullptr};
    int  *p_number4{nullptr};

    int *p_number5{}, other_int_var{};
    int* p_number6{}, other_int_var6{};	// Confusing as you wonder if other_int_var6
										//is also a pointer to int. It is not
										// The structure is exactly the same for the
										//previous statement

    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

    //It is better to separate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; // No room for confusion this time
*/

    // we know that pointers store addresses of variables
    int int_var {12};
    int *p_int{&int_var};

    std::cout << "int_var : " << int_var << std::endl;
    std::cout << "p_int (address in memory) : " << p_int << std::endl;
    std::cout << "*p_int : " << *p_int << std::endl;
    std::cout << "&p_int : " << &p_int << std::endl;

    //You can also change the address stored in a pointer any time
    int int_var1 {65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;


    //Can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};

    //p_int = &double_var; // Compiler error

    // dereferencing a pointer
    int* p_int2 {nullptr};
    int number4 {444};
    
    p_int2 = &number4;

    std::cout << "*p_int2 : " << *p_int2 << std::endl; // Dereferencing a pointer




    return 0;
}