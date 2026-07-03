#include<stdio.h>
void work(int *a , int *b);
int main(){
int a ;
int  b  ;
printf("enter number ");
scanf("%d%d", &a,&b);
work(&a, &b );
return 0;
}
void work(int * x , int *y){
    if(*x > *y){
        printf("maximum = %d" , *x);
    }
        else if(*y >*x){
            printf("maximum = %d", *y);
        }
    else{
        printf("both numbers are equal : %d" ,*x);
    }
            }
