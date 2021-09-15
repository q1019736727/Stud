//
// Created by cy on 2021/9/15.
//
#include <stdio.h>

struct Person{
    unsigned int age:3;
}ps;
typedef struct t1{
    char x;
    int y;
    double z;
}T1;

typedef struct t2{
    char x;
    double z;
    int y;
}T2;
void mDomain() {

    printf("******************* Domain位域 *************************\n");

    printf("sizeof(T1) = %lu\n", sizeof(T1));
    printf("sizeof(T2) = %lu\n", sizeof(T2));

//    超出范围并不是直接丢弃，而是保留对应的 3 位的值。
//    比如 8 是 00001000，按照位域，对应 3 位的值是 000，所以打印结果是 0；
//    但是 9 是 00001001，按照位域，对应 3 位的值是 001，所以打印结果是 1；
//    同理 10 是 00001010,按照位域，对应 3 位的值是 010，所以打印结果是 2；
    ps.age = 7;
    printf("ps.age size = %d\n", ps.age);
    ps.age = 8;
    printf("ps.age size = %d\n", ps.age);
    ps.age = 9;
    printf("ps.age size = %d\n", ps.age);
    ps.age = 10;
    printf("ps.age size = %d\n", ps.age);

    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    } bit,*pbit;
    bit.a=1;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b=7;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.c=15;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);    /* 以整型量格式输出三个域的内容 */
    pbit=&bit;    /* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit->a=0;    /* 用指针方式给位域 a 重新赋值，赋为 0 */
    pbit->b&=3;    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
    pbit->c|=1;    /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* 用指针方式输出了这三个域的值 */


}