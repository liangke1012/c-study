//
// Created by liangke on 2022/10/25.
//
#include <iostream>
using namespace std;
char *getMemory(int num){
    char *p = (char *) malloc(sizeof(char) * num);
    return p;
}
int main(){
    char *str = NULL;
    str = getMemory(100);
    strcpy(str,"hello");
    cout << str <<endl;
    free(str);
    return 0;
}
