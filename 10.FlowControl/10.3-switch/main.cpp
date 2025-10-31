#include <iostream>
#include <string>

// Tools
const int gripper{10};
const int WeldingGun{20};
const int nozzle{30};
const int pin{40};
const int laser{50};

int main(){
 /*   
    int tool{pin};

    switch(tool)
    {
        case gripper : {
            std::cout << "Active Tool is Gripper." << std::endl;
        }
        break;

        case WeldingGun : {
            std::cout << "Active Tool is WeldingGun." << std::endl;
        }
        break;

        case nozzle : {
            std::cout << "Active Tool is nozzle." << std::endl;
        }
        break;

        case pin : {
            std::cout << "Active Tool is pin." << std::endl;
        }
        break;

        case laser : {
            std::cout << "Active Tool is laser." << std::endl;
        }
        break;

        default:
            std::cout << "No match found!" << std::endl;
        break;
    }
    std::cout << "Moving On" << std::endl;
*/

    // Some explanations:
    // break command allows u to exit switch statement, and
    // if u dont use it, following lines gonna be executed.
    // several cases can be used together for the same condition.
/*
    int tool{WeldingGun};

    switch(tool){

        case gripper : {
            std::cout << "Active Tool is Gripper." << std::endl;
        }
        break;

        case WeldingGun :
        case nozzle :
        case pin : {
            std::cout << "Active Tools are weldingGun, nozzle and pin." << std::endl;
        }
        break;

        case laser : {
            std::cout << "Active Tool is laser." << std::endl;
        }

        default : 
            std::cout << "No match found!" << std::endl;
        break;
    }
*/

    std::string name {"faruk"};

    switch (name)
    {
        // ERROR: expression must have integral or enum type !
    }

    return 0;

}