//
// Created by liangke on 2022/11/3.
//
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;
void printSet(set<int> & s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main() {
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    printSet(s1);//set容器插入数据的数据会自动排序:10 20 30 40

    set<int>::iterator pos = s1.find(30);
    if (pos != s1.end()){
        cout << "找到了元素 ： " << *pos << endl;
    }else{
        cout << "未找到元素" << endl;
    }
    pair<set<int>::iterator, bool>  ret = s1.insert(10);
    if (ret.second) {
        cout << "第一次插入成功!" << endl;
    }else {
        cout << "第一次插入失败!" << endl;
    }
    return 0;
}