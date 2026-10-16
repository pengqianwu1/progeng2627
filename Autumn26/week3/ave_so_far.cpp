#include <iostream>

int main(){
    double n, sum = 0, number = 0;
    double ave;
    std::cout << "enter a number:" << std::endl;
    std::cin >> n ;
    while (n != 0){
        number += 1;
        sum += n;
        ave = sum / number;
        std::cout << "the ave so far is:" << std::endl << ave << std::endl;
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
    }
}