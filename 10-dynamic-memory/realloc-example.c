#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr =(int*) calloc(4 , sizeof(int));
ptr[0] = 2;
ptr[1] = 3;
ptr[2] = 5;
ptr [3] = 6;
    for(int i =0; i<4;i++){
        printf("Number is %d\n", ptr[i]);
    }
    ptr = realloc(ptr, 5);
    ptr[0] = 2;
ptr[1] = 3;
ptr[2] = 5;
ptr [3] = 6;
ptr[4] = 9;
 for(int i =0; i<5;i++){
        printf("Number is %d\n", ptr[i]);
    }
    return 0;
}
