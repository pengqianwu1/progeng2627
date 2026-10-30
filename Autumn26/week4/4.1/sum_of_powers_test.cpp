#include <iostream>

double mypow(double base, int exp){
    double result; 
    result = 1;
    for(int i = 1; i <= exp; i += 1){
        result *= base;
    }
    return result;
}

double sumofpower(double x, double n){
    double i = 1, sum = 0;
    while(i <= n){
        sum += mypow(x, i);
        i++;
    }
    return sum;
}

int main(){
    std::cout << (sumofpower(2,3) == 14) << std::endl;
    std::cout << (sumofpower(2,2) == 6) << std::endl;
    std::cout << (sumofpower(2,1) == 2) << std::endl;
}