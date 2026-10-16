#include <iostream>

int main(){
    int i, count = 0, max;
    std::cin >> i;
    max = i;
    while (i != 1){
        if(i % 2 == 0){
            i = i/2;
        }
        else{
            i = 3*i + 1;
        }
        std::cout << i << " ";
        count += 1;
        if(i > max){
            max = i;
        }
    }
    std::cout << std::endl;
    std::cout << "Steps: " << count << std::endl;
    std::cout << "Max: " << max << std::endl;
}