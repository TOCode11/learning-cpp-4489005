// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    const size_t LENGTH = 4;
    int age[LENGTH];
    age[0] = 2;
    age[1] = 3;
    age[2] = 7;
    age[3] = 12;

    float temperatures[LENGTH] = {31.5f,32.7f,33.0f,33.2f};

    
    std::cout << "The first element of age is: " << age[0] << std::endl;
    std::cout << "The last element of age is: " << age[3] << std::endl;
    std::cout << "outside array age is: " << age[4] << std::endl;

    std::cout << "The first element of temp is: " << temperatures[0] << std::endl;
    std::cout << "The last element of temp is: " << temperatures[3] << std::endl;
    std::cout << "outside array temp is: " << temperatures[4] << std::endl;


    return (0);
}
