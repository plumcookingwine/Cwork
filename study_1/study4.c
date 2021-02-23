#include <stdio.h>

//
// Created by hp on 2021/2/23.
//
// 通过指针修改值
//
int main4() {

    int i = 100;
    int *pi = &i;

    printf("i === %d\n", i);

    // 直接修改i的值
    i = 200;
    printf("i === %d\n", i);

    // 直接修改i的值
    *pi = 300;
    printf("i === %d\n", i);

    return 0;
}
