//
// Created by liangke on 2022/11/18.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string text = " hhhhh";
    int nums = 1234;
    auto add_to_back = [&text, nums](void){
        text += to_string(nums);
    };
    add_to_back();
    cout << text << endl;
    return 0;
}
