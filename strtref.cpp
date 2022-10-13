//
// Created by liangke on 2022/8/12.
//
#include <iostream>
using namespace std;

struct throws{
    string name;
    int made;
    int attempts;
    float percent;
};

void dispaly(const throws & ft);
void set_pc(throws & ft);
throws & accumulate(throws & target,const throws & source);
int main(){
    throws one = {"lk",13,14};
    throws two = {"lk1",10,12};
    throws three = {"lk2",10,16};
    throws four = {"lk3",15,19};
    throws five = {"lk4",6,14};
    throws team = {"team",0,0};
    throws dup;
    set_pc(one);
    dispaly(one);
    accumulate(team,one);
    dispaly(team);
    dispaly(accumulate(team,two));
    accumulate(accumulate(team,three),four);
    dispaly(team);
    dup = accumulate(team,five);
    cout << "dispaly team:" << endl;
    dispaly(team);
    dispaly(dup);

    return 0;
}

//dispaly显示内容，不修改，加上const
void dispaly(const throws & ft){
    cout << "name:" << ft.name << '\t';
    cout << "made:" << ft.made << '\t';
    cout << "attempts:" << ft.attempts << '\t';
    cout << "percent:" << ft.percent << endl;
}
//不能用值传递，用引用
void set_pc(throws & ft){
    if( ft.attempts != 0){
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    }else{
        ft.percent = 0;
    }
}
//只修改第一个参数，因此为引用，第二个参数为const引用
//返回值为引用，返回最初传递给accumulate的team对象
throws & accumulate(throws & target,const throws & source){
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}