#include <iostream>

int main(){
    int a, b, remainder, quotient = 0;
    std::cin >> a;
    std::cin >> b;
    remainder = a;
    while (remainder >= b){
        remainder -= b;
        quotient += 1;
    }
    std::cout << "quotient is: " << quotient << std::endl;
    std::cout << "remainder is: " << remainder << std::endl;
}