#include <stdio.h>

//
// Created by hp on 2021/2/23.
// sizeof 查看类型占用字节数
//
int main1() {

    printf("int 占用字节: %llu", sizeof(int));
    printf("double 占用字节: %llu\n", sizeof(double));
    printf("char 占用字节: %llu\n", sizeof(char));
    printf("short 占用字节: %llu\n", sizeof(short));
    printf("long 占用字节: %llu\n", sizeof(long));

    return 0;
}
