/*Write a program which accept temperature in Farenheit and print it in centigrade. */
#include <iostream>

using namespace std;

int main() {
    float degh,degc;
    std::cout << "enter temp in farenheit";
    std::cin>>degh;
    degc = (degh-32)/1.8;
    std::cout << "temp is ="<<degc<<"\n";
    return 0;
}
