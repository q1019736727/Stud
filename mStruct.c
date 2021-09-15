//
// Created by cy on 2021/9/15.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Books {
    char title[50];
    char author[50];
    char subject[50];
    int  book_id;
};

struct MyStruct
{
    int a;
    int b;
    char* c;
}mst; //也可以在这里定义结构体变量

struct Stu{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组
    float score;  //成绩
} stu1 = { "Tom", 12, 18, 'A', 136.5 };

void average(struct Stu * sts, int count);

void myStructF(){

    printf("******************* Struct*************************\n");

    struct Stu * pstu = &stu1;
    //读取结构体成员的值
    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", (*pstu).name, (*pstu).num, (*pstu).age, (*pstu).group, (*pstu).score);
    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", pstu->name, pstu->num, pstu->age, pstu->group, pstu->score);
    mst.a = 300;
    mst.b = 600;
    mst.c = "asdasd";
    printf("mst a = %d\n",mst.a);
    printf("mst b = %d\n",mst.b);
    printf("mst v = %s\n",mst.c);


    struct Books bk1;
    strcpy(bk1.title,"swift编程");
    strcpy(bk1.author,"swift作者");
    strcpy(bk1.subject,"swift介绍");
    bk1.book_id = 100;
    printf("bk1 title = %s\n",bk1.title);
    printf("bk1 author = %s\n",bk1.author);
    printf("bk1 subject = %s\n",bk1.subject);
    printf("bk1 book_id = %d\n",bk1.book_id);


    struct Stu stus[] = {
        { "Tom", 12, 18, 'A', 134 },
        { "Jack", 13, 18, 'B', 129 },
        { "Rose", 16, 18, 'A', 119 },
        { "Tony", 15, 18, 'A', 108 },
        { "Copy", 15, 18, 'A', 88 }
    };
    int length = sizeof(stus)/ sizeof(struct Stu);
    average(stus,length);
}

void average(struct Stu * sts, int count)
{

}

