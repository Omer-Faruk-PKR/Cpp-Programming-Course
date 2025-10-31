#include <iostream>

// Tools
const int gripper{10};
const int WeldingGun{10};
const int nozzle{10};
const int pin{10};
const int laser{10};

int main(){
    
    int tool {WeldingGun};

    if (tool == gripper){
        std::cout << "Active Tool is Gripper." << std::endl;
    }
    else if (tool == WeldingGun){
        std::cout << "Active Tool is WeldingGun." << std::endl;
    }
    else if (tool == nozzle){
        std::cout << "Active Tool is nozzle." << std::endl;
    }
    else if (tool == pin){
        std::cout << "Active Tool is pin." << std::endl;
    }
    else if (tool == laser){
        std::cout << "Active Tool is laser." << std::endl;
    }

    std::cout << "Tool change has been completed successfully!";

    return 0;

}