#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
extern int x;
extern int y;
extern void myout();
extern void mUnion();
extern void myStructF();
extern void mDomain();
extern void mFileRW();
extern void Pointer();
extern void TestFunc();

int maxValue(int value1, int value2);
void swap(int *x, int *y)
{
    int temp;
    temp = *x;    /* 保存地址 x 的值 */
    *x = *y;      /* 把 y 赋值给 x */
    *y = temp;    /* 把 temp 赋值给 y */
}

// 回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}
// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}

int sumAll(num){
    if (num == 0){
        return 0;
    }
    return num + sumAll(num-1);
}
#define PRAISE "You are an extraordinary being."

int main() {
    int days[12]={31,28,[4]=31,30,31,[1]=29}; //[4]=31,30,31 从第五位开始赋值 //[1]=29从第二位开始赋值
    int day;
    for(day=0;day<12;day++)
    printf("%2d　 %d\n",day+1,days[day]);

    char mys[5];
    //如果赋值hello就会报错,虽然mys有5个字节长度,但是默认的\0结束符还要占一个字节
    strcpy(mys,"hell");
    printf("mys == %s\n",mys);

    char name = "hello";
    printf("name.sizeof == %zd\n", sizeof(PRAISE));// == 32  因为结束符\0系统会默认算进去

    printf("long long == %d\n", INTMAX_MAX);

    printf("0+...+100 = %d\n", sumAll(100));

    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_array(myarray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    int val = 100;
    int *valP = &val;
    int *temp = 200;

    printf("val address = %p, val = %d\n",&val,val);
    printf("valp address = %p, valp = %d\n",valP,*valP);
    printf("temp address = %p, temp = %d\n",&temp,temp);

    char a[9] = "asdadasd";
    unsigned int length = strlen(a);
    printf("*(a+2) = %c, a[2] = %c\n",*(a+2),a[2]);
    printf("%d\n",length);
    printf("x + y = %d\n",x+y);
    printf("char size: %lu\n", sizeof(char));
    printf("int size: %lu\n", sizeof(int));
    printf("long int size: %lu\n", sizeof(long int));

    int c;
    int d;
    printf("c的地址是%p\nd的地址是%p\n",&c,&d);

    printf("%c,%c,%c,%c\n", 0101, '\101', '\x41', 'A');

    printf("100<<2=%d\n",100<<2);
    printf("100>>2=%d\n",100>>2);
    printf("A<<2=%d\n",0xA<<2);
    printf("A>>2=%d\n",0xA>>2);

    char tag = 'b';
    switch (tag) {
        case 'a':
            printf("good job\n");
            break;
        case 'b':
            printf("great job\n");
            break;
        default:
            printf("normal job\n");
    }

    int value = maxValue(66,88);
    printf("max value = %d\n",value);

//    myout();
//    myStructF();
//    mUnion();
//    mDomain();
//    mFileRW();
    Pointer();
    TestFunc();
    return 0;
}

int maxValue(int value1, int value2){
    return value1>value2 ? value1:value2;
}