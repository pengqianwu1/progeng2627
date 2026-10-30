#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i=0; i < vin.size(); i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> v1={1,3,2,4,7,5,6}, v2;
    filter_v(v1, 6, v2);
    for (int i=0; i < v2.size(); i++){
        std::cout << v2[i] << std::endl;
    }
}