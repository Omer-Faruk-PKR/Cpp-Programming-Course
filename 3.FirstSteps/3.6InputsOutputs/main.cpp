#include <iostream>
#include <string>

int main(){
    // printing data
    std::cout<< " Hello C++20 "<< std::endl;

    int age{21};
    std::cout << "age : "<< age << std::endl;

    std::cerr << "Error message: Something is wrong!" <<std::endl;
    std::clog << "Log message: Something happened!" <<std::endl;

/*
    int age2;
    std::string name;

    std::cout<< "please type your age and name : " << std::endl;

    std::cin >> age2 >> name;

    std::cout << "Hello " << name << "! You are " << age2 << " years old!" << std::endl;
*/

    int age3;
    std::string full_name;

    std::cout<< "please type your age and full name : " << std::endl;

    std::getline(std::cin, full_name);
    std::cin>> age3;

    std::cout << "Hello " << full_name << "! You are " << age3 << " years old!" << std::endl;

    return 0;
} 