#include <stdio.h>

/**
 * 基础,  占位符
 * @return
 */

// #include <> 寻找系统的包
// #include "" 寻找自己的头文件
// .h .hpp (声明头文件)
// .c .cpp (头文件的实现文件)
int main0() {
    printf("Hello, World!\n你好");

    int i = 100;
    printf("%d\n", i);

    double d = 10;
    printf("%lf\n", d);

    float f = 100;
    printf("%f\n", f);

    long l = 100;
    printf("%ld\n", l);

    short sd = 1;
    printf("%d\n", sd);

    char c = 'a';
    printf("%c\n", c);

    char *str = "kf";
    printf("%s\n", str);

    // getchar(); // 阻塞程序,不停止运行
    return 0;
}