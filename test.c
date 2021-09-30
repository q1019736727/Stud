//
// Created by cy on 2021/9/30.
//

#include <stdio.h>

void TestFunc(){
    printf("\n******************* TEST *************************\n");
    int i = 1;
    while (i<10){
        for (int j = 1; j < i+1; j++) {
            printf("%dX%d=%d  ",i,j,i*j);
        }
        printf("\n");
        i++;
    }
}