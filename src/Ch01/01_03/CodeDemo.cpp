// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter name (string only): " << std::flush;
    std::cin >> str;
    std::cout << std::endl << std::endl;
    std::cout << "Here is the name the user entered: " << str;
    std::cout << std::endl << std::endl;
    return (0);
}
