#include <stdio.h>

//
// Created by hp on 2021/2/23.
//
// 指针
//
int main3() {

    int i = 100;
    double d = 200;

    // 1. 直接拿到值
    printf("i 的值是 %d\n", i);
    printf("d 的值是 %lf\n", d);


    printf("\n");


    // 2. 指针取出值, 既然万物皆地址,可以通过地址拿到值
    // 通过&获取内存地址, 比如 &i 为1000DF
    // 再通过*获取地址对应的值, &i 对应的值就是100
    printf("i 的值是 %d\n", *(&i));
    printf("d 的值是 %lf\n", *(&d));


    printf("\n");


    // 3. 使用指针变量,
    // *intP代表这个变量是一个指针,指向某个对象的地址
    // 那么不带星号的intP就是地址,  那么获取这个地址的值就要打印*intP
    int *intP = &i;
    double *doubleP = &d;

    printf("i 的值是 %d\n", *intP);
    printf("d 的值是 %lf\n", *doubleP);
    // 直接打印地址
    printf("i 的地址是 %p\n", intP);
    return 0;
}

