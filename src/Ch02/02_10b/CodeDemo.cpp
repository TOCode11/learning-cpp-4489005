// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    
    float my_float;
    int32_t sgn;
    uint32_t unsgn;

    my_float = -7.66;
    sgn = my_float;
    unsgn = sgn;
    int32_t newly_signed = (int32_t) unsgn;

    std::cout << my_float << std::endl;
    std::cout << sgn << std::endl;
    std::cout << unsgn << std::endl;
    std::cout << newly_signed << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
