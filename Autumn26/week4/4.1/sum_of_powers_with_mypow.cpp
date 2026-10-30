#include <iostream>

double mypow(double base, int exp){
    double result; 
    result = 1;
    for(int i = 1; i <= exp; i += 1){
        result *= base;
    }
    return result;
}

int main(){
    double x, n, i = 1, sum = 0;
    std::cin >> x >> n;
    while(i <= n){
        sum += mypow(x, i);
        i++;
    }
    std::cout << "sum of powers: " << sum;
}