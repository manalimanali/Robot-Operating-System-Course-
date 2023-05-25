
#include <iostream>

using namespace std;
int main() {
    int z,x,y;
    std:: cout<<"\n enter first value "<< std:: endl;
    std::cin>> x;
    std::cout<<"\nenter second value"<< std:: endl;
    std::cin>> y;
    z=x;
    x=y;
    std::cout<<"\nthe first value is"<<x<< std::endl;
    std:: cout<<"\nthe second value is "<<z<<std::endl;
    return 0;
}