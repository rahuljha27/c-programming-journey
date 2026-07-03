#include<stdio.h>
void calculate(int a,int b , int *sum , int *product , int *avg);
int main(){
    int a = 2;
    int b = 4 ;int sum , product, avg;
calculate(a,b,&sum ,&product,&avg);
printf("sum =%d\n ,product =%d\n ,avg =%d", sum , product, avg);
return 0; 
}
void calculate(int a, int b , int *sum , int *product, int  *avg){
*sum = a+b;
*product = a *b;
*avg = (a+b)/ 2;
}
