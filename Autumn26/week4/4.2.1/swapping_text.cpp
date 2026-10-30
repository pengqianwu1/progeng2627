#include <iostream>

void swap_text(std::string& a, std::string& b){
    std::string temp;
    temp = a;
    a = b;
    b = temp;
}


int main(){
    std::string t1, t2;
    std::cout << "please enter two texts" << std::endl;
    std::cin >> t1 >> t2;

    std::cout << "you entered:" << std::endl;
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;

    swap_text(t1, t2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;
}