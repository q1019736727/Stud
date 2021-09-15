//
// Created by cy on 2021/9/14.
//
#include "stdio.h"
#include <math.h>
#include <time.h>

int x = 1;
int y = 2;

void getSeconds(unsigned long *par)
{
    /* 获取当前的秒数 */
    *par = time( NULL );
    return;
}

int max(int x, int y)
{
    return x > y ? x : y;
}

int sum(int);

void myout() {
    printf("**************** out.h ******************\n");
    int result = sum(100);
    printf("1..+..100 = %d\n", result);
    printf("result(16进制) = %x\n",result);

    double arr[5] = {100,200,300,400,500};
    double * p = arr;
    printf("*arr[1] = %.2f\n",*(arr+1));
    printf("*p[1] = %.2f\n\n",*(p+1));

    printf("arr = %p,p = %p\n",&arr,&p);
    for (int i = 0; i < 5; i++) {
        printf("value = %.2f\n",*p);
        *p++;
    }

    unsigned long sec;
    getSeconds(&sec);
    printf("sec = %ld\n\n",sec);

    printf("**************** 函数指针******************\n");
    /* mx 是函数指针 */
    int (* mx)(int, int) =  max; // &可以省略
    int a, b, c, d;
    printf("请输入三个数字:");
    scanf("%d %d %d", &a, &b, &c);
    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = mx(mx(a, b), c);
    printf("最大的数字是: %d\n", d);
}

int sum(int n){
    if (n == 0) {return 0;}
    return n + sum(n-1);
}
