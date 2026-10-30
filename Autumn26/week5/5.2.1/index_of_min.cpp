#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int index;
    double min;
    if (vin.size() != 0){
        min = vin[0];
        index = 0;
        for(int i=1; i<vin.size(); i++){
            if (min>vin[i]){
                index = i;
            }
        }
    }
    else index = -1;
    return index;
}

int main(){
    std::vector<double> v;
    v = {3, 1, 2, 4, 0.5, 7};
    std::cout << min_vector_element(v) << std::endl;
}