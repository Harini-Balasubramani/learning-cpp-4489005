// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
int a, b=5, c; //global variables
int main(){
    bool my_flag; 
    //bool name is declared as my_flag
    a=7;
    my_flag=false;
    std::cout<<"a= "<<a<<std::endl;
    std::cout<<"b= "<<b<<std::endl;
    std::cout<<"my_flag= "<<my_flag<<std::endl;
    c = b - a;
    std::cout<<"c = "<<c<<std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout<<"positive= " <<positive<<std::endl;
    std::cout << "Hi There!" << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
