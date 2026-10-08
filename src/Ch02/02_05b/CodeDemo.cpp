// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 123456789112;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "e";
    auto h = "C++ !";

    std::cout << "The type of a is: " << typeid(a).name() << std::endl;
    std::cout << "The type of b is: " << typeid(b).name() << std::endl;
    std::cout << "The type of c is: " << typeid(c).name() << std::endl;
    std::cout << "The type of d is: " << typeid(d).name() << std::endl;
    std::cout << "The type of e is: " << typeid(e).name() << std::endl;
    std::cout << "The type of f is: " << typeid(f).name() << std::endl;
    std::cout << "The type of g is: " << typeid(g).name() << std::endl;
    std::cout << "The type of h is: " << typeid(h).name() << std::endl;

    std::cout << std::endl << std::endl;
    std::cout << "You reached the end! " << std::endl;

    return (0);
}
