//
// Created by liangke on 2022/11/3.
//
#include <algorithm>
#include <iostream>
#include "map"
using namespace std;
void printMap(map<int,int>&m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}
int main(){
    pair<string, int> p(string("Tom"), 20);
    cout << "姓名： " <<  p.first << " 年龄： " << p.second << endl;
    map<int,int>m; //默认构造
    //第一种插入方式
    m.insert(pair<int, int>(1, 10));
//第二种插入方式
    m.insert(make_pair(2, 20));
    //第三种插入方式
    m.insert(map<int, int>::value_type(3, 30));
    //第四种插入方式
    m[4] = 40;
    printMap(m);


    return 0;
}