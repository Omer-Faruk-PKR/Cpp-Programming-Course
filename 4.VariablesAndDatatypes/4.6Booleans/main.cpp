#include <iostream>

int main(){

    bool red {true};
    bool green {false};

    if(red == true){
        std::cout<<"Stop!"<<std::endl;
    }else{
        std::cout<<"Go through!"<<std::endl;
    }

    if(green){
        std::cout<<"The light is green!"<<std::endl;
    }else{
        std::cout<<"The light is NOT green!"<<std::endl;
    }

    std::cout<<"size of a bool is "<<sizeof(bool)<<std::endl;  // 1byte

    std::cout<<"red "<<red<<std::endl;
    std::cout<<"green "<<green<<std::endl;

    // printing them again but with different outcome
    std::cout<<std::boolalpha;

    std::cout<<"red "<<red<<std::endl;
    std::cout<<"green "<<green<<std::endl;


    return 0;
}