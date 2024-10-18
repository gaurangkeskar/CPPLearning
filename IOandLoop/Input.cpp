#include "Input.h"

Input::Input(){}

Input::~Input(){}

void Input::getInput()
{
    bool case1 = true;
    std::cout << "Enter numbers (non-numeric input to stop): " << std::endl;
    while (case1) {
        std::cout << "> ";
        std::cin >> number;

        if (std::cin.fail()) {
            std::cout << "Invalid input encountered. Please enter numeric values." << std::endl;

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            if (std::cin.get() == 'q') {
                case1 = false;
                break;
            }


            std::cout << "Continuing to read numbers..." << std::endl;
            continue;
        } 
        std::cout << "You entered: " << number << std::endl;
    }

        
}

   