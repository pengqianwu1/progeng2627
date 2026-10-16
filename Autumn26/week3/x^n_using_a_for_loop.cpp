#include <iostream>

int main(){
    int x, n, result;
    result = 1;
    std::cin >> x >> n;
    for(int i = 0; i < n; i++){
        result *= x;
    } 
    std::cout << result << std::endl;
}