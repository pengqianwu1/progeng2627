#include <iostream>

double max_of_three(double num1, double num2, double num3){
    if ((num1 > num2) & (num1 > num3)) {
        return num1;
    }
    else if ((num2 > num1) & (num2 > num3)) {
        return num2;
    }
    else{
        return num3;
    }
}

int main(){
    std::cout << (max_of_three(1,2,3) == 3) << std::endl;
    std::cout << (max_of_three(1,3,2) == 3) << std::endl;
    std::cout << (max_of_three(3,2,1) == 3) << std::endl;
    std::cout << (max_of_three(-1,-2,-3) == -1) << std::endl;
}