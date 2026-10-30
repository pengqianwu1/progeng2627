#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf <= n; cf++){
        if( (n % cf) == 0){
            return cf;
        }
    }
}

int main(){
    std::cout << smallest_factor(6) << std::endl;
    std::cout << smallest_factor(15) << std::endl;
    std::cout << smallest_factor(2) << std::endl;
}