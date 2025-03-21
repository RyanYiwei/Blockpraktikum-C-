#include <iostream>
#include <vector>

int main(){
    std::vector<int> v ={1, 2, 3, 4};
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout<<std::endl;

    v.pop_back();
    v.insert(v.begin()+1, 2, 100);
    for(auto it = v.begin(); it!= v.end(); ++it){
        std::cout<< *it << " ";
    }
    std::cout<<std::endl;

    v.erase(v.begin()+2, v.begin()+4);
    for(auto it = v.begin(); it!= v.end(); ++it){
        std::cout<< *it << " ";
    }
}