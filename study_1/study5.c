#include <stdio.h>

/**
 * Created by hp on 2021/2/23.
 *
 * 函数 修改某个值
 */

// 函数需要先声明

void changeVal(int i);

void changeP(int *i);

void swap(int *a, int *b);

int main() {
    int i = 1;

    printf("i point address === %p\n", &i);

    // 直接传值,是不能修改i的值的
    changeVal(i);
    printf("i === %d\n", i);


    // 通过地址修改值之后 i === 200
    changeP(&i);
    printf("i === %d\n", i);

    // 进阶: 根据以上原理,定义一个函数,交换两个int的值?
    int a = 10;
    int b = 20;
    swap(&a, &b); // 交换
    printf("a === %d\n", a);//a === 20
    printf("b === %d\n", b);//b === 10
    return 0;
}

// 当函数入栈时,会在内存开辟一个i的空间,
// 这时跟传递进来的i的地址是不一样的,修改了这个数是不起作用的\
// 通过打印两个i的地址即可证实
// i point address === 000000000061FE1C
// changVal i point address === 000000000061FDF0
void changeVal(int i) {
    i = 300;
    printf("changVal i point address === %p\n", &i);
}

// 把i的地址传递到这个函数中来, 在通过地址修改值
// 这时在上面打印就是修改过后的值了
void changeP(int *i) {
    *i = 200;
}


// 先定义一个tmp,找到a地址的值,
// a地址的值赋值为b
// b地址的值再赋值为tmp即可.
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}



