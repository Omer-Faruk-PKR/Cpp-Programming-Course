#include <iostream>

int main(){
    /*   WITHOUT VALUE ASSIGNMENT - OUTPUT IS JUNK DATA
    // declare an array of ints
    int scores [10]; // junk data since it didnt have any data in it

    // assign data
    scores[0] = 10;
    scores[1] = 40;
    scores[2] = 50;

    // read data
    std::cout << " scores [0] : " << scores[0] << std::endl; 
    std::cout << " scores [1] : " << scores[1] << std::endl;
    std::cout << " scores [2] : " << scores[2] << std::endl;

    // read with a loop
    for( size_t i {0} ; i<10 ; ++i){
        // first three data is assigned but the rest is junk 
        std::cout << "scores [" << i << "] : " << scores[i] <<std::endl;
    }
    */
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -
    /*
    // another decleration type with another data type
    double salaries[5] {12.5, 32.1, 41.2, 59.2, 99.9};

    for( size_t i{0}; i < 5; ++i ){
        std::cout << i << ". salary is = " << salaries[i] << std::endl;
    }
    */
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -
    /*
    // declared 5 elements but assigned 3
    // so rest is gonna be 0
    int families[5] {12, 42, 25};
    for ( size_t i ; i < 5; ++i){
        std::cout << i << ". family member's age is = " << families[i] << std::endl;
    }
    */
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -
    /*
    // omit the size of the array at declaration
    int class_sizes[] {12,23,13,42,55};

    for ( auto value : class_sizes ){
        std::cout << " value : " << value << std::endl;
    }
    */
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -
    /*
    const int birds[] {10,11,12,13,14,15,16};
    birds[2] = 4;
    // "expression must be a modifiable value" error. Since i used const
    */
// -    -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -
    /*
    // sum up scores array, store result in sum
    int scores[] {1,2,3,4,5,6,7};
    int sum {0};

    for (int element : scores){
        sum += element;    
    }
    std::cout << "Score sum = " << sum << std::endl;
    */

    return 0;
}