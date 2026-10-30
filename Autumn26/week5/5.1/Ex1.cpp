#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    double n;
    for(int i=1; i<=3; i++){
        std::cin >> n;
        v.push_back(n);
    }
    std::cout << v[0] * ( v[1] + v[2] ) << std::endl;
}