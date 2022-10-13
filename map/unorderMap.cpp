//
// Created by liangke on 2022/10/12.
//
#include <unordered_map>
#include <iostream>

using namespace std;
int main()
{
    std::unordered_map<std::string,int> umap;
    umap.insert({"test",1});
    umap["hjda"] = 45;
    cout << umap.at("test") << endl;
    for( auto& a : umap)
    {
        string key= a.first;
        int value= a.second;
        cout << key << "   " << value <<endl;
    }
    cout << "————————————————" << endl;
    umap["test"] = 2344;
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        string key = it->first;
        int  value = it->second;
        cout << key << "   " << value <<endl;
    }
    cout << umap.size() << endl;
    return 0;
}
