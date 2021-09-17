//
// Created by cy on 2021/9/15.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rwF1();
void rwF2();
void mFileRW() {

    printf("******************* File 文件读写 *************************\n");
//    rwF1();
    rwF2();
}

void rwF1(){

    FILE * fp = NULL;

    if ((fp = fopen("/Users/zhaoenjia/Desktop/CWritefile/test.txt","w+")) == NULL){
        printf("open file fail");
        return;
    }

    //写入文件
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fputs("写入数据\n",fp);
    fputc('P',fp);
    fclose(fp);

    char buff[255];
    fp = fopen("/Users/zhaoenjia/Desktop/CWritefile/test.txt", "r+");

//    printf("******** 分段读取 *********\n");
//    fscanf(fp, "%s", buff);
//    printf("1: %s\n", buff );
//
//    fgets(buff, 255, fp);
//    printf("2: %s\n", buff );
//
//    fgets(buff, 255, fp);
//    printf("3: %s\n", buff );
//
//    fgets(buff, 255, fp);
//    printf("4: %s\n", buff );
//
//    fgets(buff, 255, fp);
//    printf("5: %s\n", buff );

    printf("********  while分段读取 *********\n");
    char slice[100],all[1024];
    while (!feof(fp)){
        fgets(slice,100,fp);
        printf("%s\n",slice);
        strcat(all,slice);
    }
    printf("*****************\n");
    printf("%s\n",all);

    fclose(fp);
}

struct Student {
    char name[10];
    int age;
};

void rwF2() {

    struct Student stu[] = {{"Tom",18},{"jack",19}};

    FILE *fp = NULL;

    fp = fopen("/Users/zhaoenjia/Desktop/CWritefile/students.txt","w");
    if (fp == NULL) {
        printf("open file fail");
        exit(0);
    }
    fwrite(stu, sizeof(struct Student), strlen(stu),fp);
    fclose(fp);
    printf("write end");

    struct Student stuRead[2];
    fp = fopen("/Users/zhaoenjia/Desktop/CWritefile/students.txt","r");
    if (fp == NULL) {
        printf("open file fail");
        exit(0);
    }
    fread(stuRead, sizeof(struct Student), strlen(stuRead),fp);
    fclose(fp);
    printf("Student length = %d\n",strlen(stuRead));
    for (int i = 0; i < strlen(stuRead)-1; i++) {
        printf("name = %s\n",stuRead[i].name);
        printf("age = %d\n",stuRead[i].age);
    }

}