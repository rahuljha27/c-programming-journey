#include<stdio.h>
int main(){
    int i,sum=0 ,x;
    printf("enter number");
    scanf("%d",& i);  x=i;
    while(i>0){
        sum = sum + (i%10)*(i%10)*(i%10);
        i=i/10;
    }
    if(sum ==x){
        printf("it is a armstrong number \n");
    }
    else{
        printf("its not ");
    }
    return 0;
}
