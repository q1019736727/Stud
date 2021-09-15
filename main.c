#include <stdio.h>
#include <string.h>
extern int x;
extern int y;
extern void myout();
extern void myStructF();
int maxValue(int value1, int value2);
void swap(int *x, int *y)
{
    int temp;
    temp = *x;    /* 保存地址 x 的值 */
    *x = *y;      /* 把 y 赋值给 x */
    *y = temp;    /* 把 temp 赋值给 y */
}
int main() {

    int val = 100;
    int *valP = &val;
    int *temp = 200;

    printf("val address = %p, val = %d\n",&val,val);
    printf("valp address = %p, valp = %d\n",valP,*valP);
    printf("temp address = %p, temp = %d\n",&temp,temp);

    char a[9] = "asdadasd";
    unsigned int length = strlen(a);
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
    myStructF();
    return 0;
}

int maxValue(int value1, int value2){
    return value1>value2 ? value1:value2;
}