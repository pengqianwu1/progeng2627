#include <iostream>

void int_div(int a, int b, int& div, int& rem){
    div = a/b;
    rem = a - b*div;
}

int main(){
    int a, b, div, rem;
    std::cout << "input two integer numbers:" << std::endl;
    std::cin >> a >> b;
    int_div(a, b, div, rem);
    std::cout << a << " / " << b << " = " << div << " ... " << rem << std::endl;
}