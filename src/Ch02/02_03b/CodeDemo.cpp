// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a;
int b = 5; // 

int main(){
    bool my_flag;
    a = 7;
    my_flag = true;

    std::cout << "Hi There!" << std::endl;
    std::cout << my_flag << std::endl;
    std::cout << a << std::endl;
    std::cout << "a+b = " << a+b << std::endl;

    unsigned int positive_number;
    positive_number = b - a;
    std::cout << "a - b but expressed with unsigned int is (positive number) " << positive_number << std::endl;
    std::cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << " (note that this is in bytes)" << '\n'; // bytes
    std::cout << std::endl << std::endl;
    return (0);
}
