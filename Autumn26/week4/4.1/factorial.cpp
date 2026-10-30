#include <iostream>

int myfactorial(int in){
    int fact;
    fact = 1;
    for(int i = 1; i <= in; i += 1){
        fact *= i;
    }
    return fact;
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}