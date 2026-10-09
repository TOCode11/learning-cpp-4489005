// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

// this is a directive
#include <iostream>
#include <string>
#include <cstdint>

// this is another directive
#define CAPACITY 5000
#define DEBUG

int main(){
    
    int32_t large = CAPACITY;
    uint8_t small = 37;

    large += small;


    std::cout << "This is the result of the addition stored in a int32_t: " << large << std::endl;

    // this is not a standard if (it's performed by precompilation)
#ifdef DEBUG
    std::cout << "DEBUG macro was defined!" << std::endl;
#endif


    return (0);
}
