#include <iostream>

int main(){
    
    int var1 {123}; //declare and init
    std::cout<<"var1 : "<<var1<<std::endl;

    var1 = 12;  //assign
    std::cout<<"var1 : "<<var1<<std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -"<<std::endl;

    double var2 {123.123}; //declare and init
    std::cout<<"var2 : "<<var2<<std::endl;

    var2 = 12.12;  //assign
    std::cout<<"var2 : "<<var2<<std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -"<<std::endl;

    double var3 {123.123}; //declare and init
    std::cout<<"var3 : "<<var3<<std::endl;

    var3 = 12;  //assign but as an integer not a fractioanl number
    std::cout<<"var3 : "<<var3<<std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -"<<std::endl;

    double var4 {123.123}; //declare and init
    std::cout<<"var4 : "<<var3<<std::endl;

    var4 = false;  //assign but as a bool not a fractioanl number
    std::cout<<"var4 : "<<var4<<std::endl;          // result = 0
    var4 = true;  //assign but as a bool not a fractioanl number
    std::cout<<"var4 : "<<var4<<std::endl;          // result = 1

    std::cout<<"-   -   -   -   -   -   -   -   -"<<std::endl;

    //Auto type deduction
    //careful about auto assignment 
    auto var5 {33u};    // declare and init with type deduction. unsigned int

    var5 = -22;         // assign negative number. Danger!

    std::cout<<"var5 : "<<var5<<std::endl;  // garbage number


    return 0;
}