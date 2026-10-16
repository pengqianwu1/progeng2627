#include <iostream>

int main(){
    int n, i=1 ,j=1;
    std::cin >> n;
    for(; i<=n ;i++){
        for(; j<=n; j++){
          std::cout << i*j << "\t";
        }
        std::cout << std::endl;
        j = 1;
    }
}