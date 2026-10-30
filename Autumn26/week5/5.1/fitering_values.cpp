#include <iostream>
#include <vector>

int main(){
    int n;
    double num, t;
    std::vector<double> v;

    std::cout << "please enter n: " << std::endl;
    std::cin >> n;

    for(int i=1; i <= n; i++){
        std::cout << "please enter a number: " << std::endl;
        std::cin >> num;
        v.push_back(num);
    }
    
    std::cout << "please enter t:" << std::endl;
    std::cin >> t;

    for(int i=0; i<v.size(); i++){
        if (v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }
}