#include <iostream>

double max_of_two(double num1, double num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    std::cout << (max_of_two(1,2) == 2) << std::endl;
    std::cout << (max_of_two(0,2) == 2)<< std::endl;
    std::cout << (max_of_two(-1,1) == 1)<< std::endl;
    std::cout << (max_of_two(-1,-2) == -1)<< std::endl;
}