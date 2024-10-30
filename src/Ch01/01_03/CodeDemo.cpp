// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> //to get user i/p string

int main(){
    std::string str; 
    //str to hold user i/p
    //std to ignore specifying variables/func in standard lib
    std::cout<<"Enter your Name: "<<std::flush;
    //flush to send the o/p to terminal instead of waiting for user i/p
    std::cin >> str; 
    //cin object to store single word user i/p in str
    std::cout <<"Nice to meet you, " <<str<<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
