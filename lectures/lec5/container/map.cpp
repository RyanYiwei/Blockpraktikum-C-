#include <iostream>
#include <map>
#include <string>

int main(){
    std::map<std::string, int> scores;
    std::pair<std::string, int> s1("Ryan", 98);
    auto s2 = std::make_pair("Steve", 90);
    scores.insert(s1);
    scores.insert(s2);
    scores.insert(std::make_pair("Michael", 95));
    scores["Bob"] = 88;
    std::cout << scores.find("Ryan")->second << std::endl;

    for(auto iter = scores.begin(); iter!=scores.end(); iter++){
        std::cout << iter->first << " : " << iter->second << "\n";
    }
    for(const auto &[name, score]: scores){
        std::cout << name << " : " << score << "\n";
    }

}