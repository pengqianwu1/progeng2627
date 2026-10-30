#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf <= n; cf++){
        if( (n % cf) == 0){
            return cf;
        }
    }
}

int main(){
    int n1, n2;
    std::cout << "enter the range: " << std::endl;
    std::cin >> n1 >> n2;
    for(int f = n1; f <= n2; f++){
        if (smallest_factor(f) == f){
            std::cout << f << std::endl;
        }
    }
}