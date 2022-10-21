//
// Created by liangke on 2022/10/18.
//
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
    int* a1 = (int*) malloc(sizeof (int));
    int* a2 = (int*) malloc(sizeof (int));
    int* a3 = (int*) malloc(sizeof (int));
    printf("a1 = %p, a2 =%p, a3=%p \n" ,a1,a2,a3);
    free(a2);
    char* a4 = (char*) malloc(sizeof (char));
    printf("a4=%p",a4);
    return 0;
}

