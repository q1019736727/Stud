//
// Created by cy on 2021/9/29.
//

#include <stdio.h>
#include <string.h>

#define SIZE 4

int sump(int * start,int * end) {
    int total = 0;
    while (start < end){
        printf("%d\n",*start);
        total += *start;
        start++;
    }
    return  total;
}
void Pointer(){
    printf("******************* Pointer *************************\n");

    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    pti = dates;// 把数组地址赋给指针
    ptf = bills;
    printf("%23s　%15s\n","short","double");
    for(index=0;index<SIZE;index++)
        printf("pointers　+　%d:　%10p　%10p\n",index,pti+index,ptf+index);

    int testArr[5] = {66,68,69,70,88};
    printf("pointer = %p %5p\n",testArr,testArr+5);
    printf("sumAll = %d\n", sump(testArr,testArr+5));


    printf("******************* 指针操作 *************************\n");
    int urn[5]={100,200,300,400,500};
    int * ptr1, *ptr2, *ptr3;
    ptr1 = urn;// 把一个地址赋给指针
    ptr2 = &urn[2]; // 把一个地址赋给指针

    // 解引用指针，以及获得指针的地址
    printf("\n解引用指针，以及获得指针的地址:\n");
    printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // 指针加法
    ptr3=ptr1+4;
    printf("\n指针加法:\n");
    //这里ptr1+4相当于加4个字节到地址上
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));

    // 递增指针
    ptr1++;
    printf("\n递增指针:\n");
    printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // 递减指针
    ptr2--;
    printf("\n递增指针:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    --ptr1;// 恢复为初始值
    ++ptr2;// 恢复为初始值
    printf("\n恢复为初始值:\n");
    printf("ptr1　=　%p,　ptr2　=　%p\n",ptr1,ptr2);

    // 一个指针减去另一个指针
    printf("\n一个指针减去另一个指针:\n");
    printf("ptr2　=　%p,　ptr1　=　%p,　ptr2　-　ptr1　=　%td\n",ptr2,ptr1,ptr2-ptr1);

    // 一个指针减去一个整数
    printf("\n一个指针减去一个整数:\n");
    //这里 指针-2 相当于减去2个int(根据实际情况而定)的大小也就是2X4 8个字节的大小
    printf("ptr3　=　%p,　ptr3　-　2　=　%p\n",ptr3,ptr3-2);


    printf("\n******************* 多维数组指针 *************************\n");

    int zippo[4][2]={{2,4},{6,8},{1,3},{5,7}};
    //多8个字节
    printf("　　zippo　=　%p,　　 zippo　+　1　=　%p\n",zippo,zippo+1);
    //多4个字节
    printf("zippo[0]　=　%p,　zippo[0]　+　1　=　%p\n",zippo[0],zippo[0]+1);
    //多4个字节，因为已经解引了一次
    printf("　*zippo = %p,　 *zippo + 1 = %p\n",*zippo, *zippo + 1);
    printf("zippo[0][0]　=　%d\n",zippo[0][0]);//2
    printf("　*zippo[0] = %d\n", *zippo[0]);//2
    printf("　 **zippo = %d\n", **zippo);//2
    printf("　　　　zippo[2][1]　=　%d\n",zippo[2][1]);//3
    printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo + 2) + 1));//3

    printf("\n******************* 指向多维数组的指针 *************************\n");

    int zippo2[4][2]={{2,4},{6,8},{1,3},{5,7}};
    int(*pz)[2];
    pz=zippo2;
    printf("　　pz　=　%p,　　 pz　+　1　=　%p\n", pz,pz+1);
    printf("pz[0]　=　%p,　pz[0]　+　1　=　%p\n", pz[0],pz[0]+1);
    printf("　*pz = %p,　 *pz + 1 = %p\n", *pz, *pz + 1);
    printf("pz[0][0]　=　%d\n",pz[0][0]);
    printf("　*pz[0] = %d\n", *pz[0]);
    printf("　 **pz = %d\n", **pz);
    printf("　　　　pz[2][1]　=　%d\n",pz[2][1]);
    printf("*(*(pz+2) + 1) = %d\n", *(*(pz + 2) + 1));


}