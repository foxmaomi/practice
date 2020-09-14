#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> dict;
    dict.insert({
            {"apple", "苹果"},
            {"banana", "香蕉"},
            {"blue", "蓝色"},
            });

    string k = "apple";
    unordered_map<string,string>::const_iterator it = dict.find(k);
    if(it != dict.end()){
        std::cout << it->first << " : " << it->second << std::endl;
    }else{
        std::cout <<"not found!" << std::endl;
    }

    for(auto i = dict.begin(); i!= dict.end(); i++){
        std::cout <<"遍历: "<< i->first << " : " << i->second << std::endl;
    }
}





