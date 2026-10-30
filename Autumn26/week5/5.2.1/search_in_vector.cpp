#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i=0; i < vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int> v;
    v = {1, 2, 3, 4};
    std::cout << search_vector(3, v) << std::endl;
    std::cout << search_vector(6, v) << std::endl;
}