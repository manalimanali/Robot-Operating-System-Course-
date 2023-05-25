/*5. Write a program which accept principle, rate and time from user and print the simple interest. */
 #include <iostream>

using namespace std;

int main() {
    float r,t,p,sir;
    std::cout <<"wlcm to interest rate calculator (simple)\n";
    std::cout <<"enter amount (principle)";
    std:: cin>>p;
   std::cout <<"\nenter time in years";
   std:: cin>>t;
    std::cout << "\nenter rate as a precentage";
    std::cin>>r;
    sir= p*(1+t*(r/100));
    std:: cout<<" result = "<< sir;
    return 0;
}
