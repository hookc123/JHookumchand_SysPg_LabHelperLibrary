// JHookumchand_SysPg_LabHelperLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Helper.h"

int main()
{
    std::cout << "-----------Validate Int----------" << std::endl;
    int min= Helper::randNum();
    int max= Helper::randNum();
    Helper::GetRandRange(min,max);
    std::cout << "Range: " << min << '-' << max << std::endl;
    int number= Helper::GetValidatedInt("Input Number: ", min, max);
    
    std::cout << "-----------Print Binary----------" << std::endl;
    Helper::printBinary(number);

    std::cout << "-----------Random Number----------" << std::endl;
    int number1 = Helper::randNum(0,100);
    std::cout << number1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
