//
// Created by liangke on 2022/8/11.
//
#include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

void printStudent(student stu) {
    stu.age = 28;
    cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;
}

//const使用场景
//加const防止函数体中的误操作
void printStudent3(const student *stu) {
    //stu->age = 100; //操作失败，因为加了const修饰
    cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
}

int main() {
    struct student stu1;
    stu1.name = "liangke";
    stu1.age = 12;
    stu1.score = 100;
    cout << stu1.name << stu1.age << endl;

    struct student stu2 = {"yn",12,33};
    struct student *p = &stu2;
    p->age = 34;
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

    struct student stu3 = {"hahahaha",12,33};
    printStudent(stu3);

    struct student stu4 = {"123455",88,33};
    printStudent3(&stu4);
    return 0;
}

//地址传递
void printStudent2(student *stu){
    stu->age = 28;
    cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age  << " 分数：" << stu->score << endl;
}


