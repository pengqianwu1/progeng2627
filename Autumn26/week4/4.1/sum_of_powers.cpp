#include <iostream>
#include <cmath>

int main(){
    double x, n, i = 1, sum = 0;
    std::cin >> x >> n;
    while(i <= n){
        sum += std::pow(x, i);
        i++;
    }
    std::cout << "sum of powers: " << sum;
}