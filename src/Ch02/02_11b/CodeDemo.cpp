// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int farh = 100;
    int celsius;
    
    celsius = (5.0/9.0) * (farh - 32);

    std::cout << "celcius result: " << celsius << std::endl;


    float weight = 10.99;

    std::cout << "float: " << weight << std::endl;
    std::cout << "integer part: " << (int) weight << std::endl;
    std::cout << "fractional part: " << (weight - (int) weight) * 10000 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
