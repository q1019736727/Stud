//
// Created by cy on 2021/9/15.
//
#include <stdio.h>
#include <string.h>

#define TOTAL 4  //人员总数

struct{
    char name[20];
    int num;
    char sex;
    char profession;
    union{
        float score;
        char course[20];
    } sc;
} bodys[TOTAL];

void mUnion() {

    printf("******************* Union *************************\n");
//    int i;
//    //输入人员信息
//    for(i=0; i<TOTAL; i++){
//        printf("Input info: ");
//        scanf("%s %d %c %c", bodys[i].name, &(bodys[i].num), &(bodys[i].sex), &(bodys[i].profession));
//        if(bodys[i].profession == 's'){  //如果是学生
//            scanf("%f", &bodys[i].sc.score);
//        }else{  //如果是老师
//            scanf("%s", bodys[i].sc.course);
//        }
//        fflush(stdin);
//    }
//    //输出人员信息
//    printf("\nName\t\tNum\t\tSex\tProfession\tScore / Course\n");
//    for(i=0; i<TOTAL; i++){
//        if(bodys[i].profession == 's'){  //如果是学生
//            printf("%s\t%d\t%c\t%c\t\t%f\n", bodys[i].name, bodys[i].num, bodys[i].sex, bodys[i].profession, bodys[i].sc.score);
//        }else{  //如果是老师
//            printf("%s\t%d\t%c\t%c\t\t%s\n", bodys[i].name, bodys[i].num, bodys[i].sex, bodys[i].profession, bodys[i].sc.course);
//        }
//    }


}
