// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, meat, frozen, launcdr, dairy, bakery};

int main(){
    cow_purpose a;
    int meat = 8;

    a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
