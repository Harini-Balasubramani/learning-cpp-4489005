// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>
//creating variable that suits to any type

int main(){
    auto a = 8;
    auto b = 23456653; //long double
    auto c = 3.14f; //constant specifier for float is .f
    auto d = 3.14;
    auto e = true;
    auto f = 'd'; //char, so single quote
    auto g = "C++ rocks!"; //PKc - pointer to const char
    
    std::cout<<"the type of a is "<<typeid(a).name()<<std::endl;
    std::cout<<"the type of b is "<<typeid(b).name()<<std::endl;std::cout<<"the type of c is "<<typeid(c).name()<<std::endl;std::cout<<"the type of d is "<<typeid(d).name()<<std::endl;std::cout<<"the type of e is "<<typeid(e).name()<<std::endl;std::cout<<"the type of f is "<<typeid(f).name()<<std::endl;std::cout<<"the type of g is "<<typeid(g).name()<<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
