//
// Created by liangke on 2022/11/17.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    std::vector<int> nums = {10,33,45,66,78};
    bool is_greater_than_50 = std::all_of(nums.begin(),nums.end(),[](auto &num){
        return num > 50;
    });
    if (!is_greater_than_50)
        std::cout << "不全大于50\n\n";
    else
        std::cout << "全大于50\n\n";

    bool is_exist_greater_than_100 = std::any_of(nums.begin(), nums.end(), [](int &item) {return 50 < item; });

    if (is_exist_greater_than_100)
        std::cout << "存在大于50的分数\n";
    else
        std::cout << "不存在大于50的分数\n\n";
    bool is_less_than_100 = std::none_of(nums.begin(), nums.end(), [](int &item) {return 100 < item; });
    if (is_less_than_100)
        std::cout << "所有分数都不大于100\n";
    else
        std::cout << "存在大于100的分数\n\n";

    return 0;
}