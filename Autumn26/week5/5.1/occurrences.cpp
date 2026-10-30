#include <iostream>
#include <vector>

int main(){
    int n, occ=0;
    double num, s;
    std::vector<double> v;

    std::cout << "please enter n: " << std::endl;
    std::cin >> n;

    for(int i=1; i <= n; i++){
        std::cout << "please enter a number: " << std::endl;
        std::cin >> num;
        v.push_back(num);
    }
    
    std::cout << "please enter s:" << std::endl;
    std::cin >> s;

    for(int i=0; i<v.size(); i++){
        if (v[i] == s){
            occ++;
        }
    }
    if (occ > 0){
        std::cout << "there are " << occ << " occurrences of " << s << std::endl;
    }
    else{
        std::cout << "there are no occurrences of " << s << std::endl;
    }
}