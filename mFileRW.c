//
// Created by cy on 2021/9/15.
//
#include <stdio.h>
#include <string.h>
void rwF1();
void rwF2();
void mFileRW() {

    printf("******************* File 文件读写 *************************\n");
    rwF1();
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

void rwF2() {


}