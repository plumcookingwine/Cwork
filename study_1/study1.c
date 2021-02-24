#include <stdio.h>

//
// Created by hp on 2021/2/23.
// sizeof 查看类型占用字节数
//
int main1() {
    printf("int 占用字节: %lu\n", sizeof(int));
    printf("double 占用字节: %lu\n", sizeof(double));
    printf("float 占用字节: %lu\n", sizeof(float));
    printf("char 占用字节: %lu\n", sizeof(char));
    printf("short 占用字节: %lu\n", sizeof(short));
    printf("long 占用字节: %lu\n", sizeof(long));
    return 0;
}
