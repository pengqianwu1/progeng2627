#include <iostream>

int main(){
    int n, i = 0, j;
    std::cin >> n;
    while(i<n){
        j = 0;
        while(j < n){
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i ++;
    }
}