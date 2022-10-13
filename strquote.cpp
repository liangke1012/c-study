//
// Created by liangke on 2022/8/12.
//
#include <iostream>
using namespace std;

string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);
int main(){
    string input;
    string copy;
    string result;
    getline(cin, input);
    copy = input;
    cout << "input: " << input << endl;
    result = version1(input,"***");
    cout << "result: " << result << endl;
    cout << "input: " << input << endl;

    result = version2(input,"###");
    cout << "result: " << result << endl;
    cout << "input: " << input << endl;

    input = copy;
    result = version3(input,"@@@");
    cout << "result: " << result << endl;
    cout << "input: " << input << endl;
    return 0;
}

string version1(const string & s1, const string & s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1, const string & s2){
    s1 = s2 + s1 + s2;
    return s1;
}

const string & version3(string & s1, const string & s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}


