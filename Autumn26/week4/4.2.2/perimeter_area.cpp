#include <iostream>

void perimeterarea(double s1, double s2, double& peri, double& area){
    peri = 2*(s1+s2);
    area = s1*s2;
}

int main(){
    double s1, s2;
    std::cout << "please enter the two sides of a rectangle" << std::endl;
    std::cin >> s1 >> s2;
    double peri, area;
    perimeterarea(s1, s2, peri, area);
    std::cout << "perimeter: " << peri << std::endl;
    std::cout << "area: " << area << std::endl;
}