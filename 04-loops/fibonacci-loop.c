#include<stdio.h>
int main(){
    int n;
    printf("enter  number");
    scanf("%d",&n);
    int first = 0,second = 1 , next;
    if(n==0){
        printf("0");
    }
    if(n==1){
        printf("0 1");
    }
    else{
        printf("0 1");
    }
    for(int i = 2; i<=n;i++){
       next = first + second ;
       printf("%d ", next);
       first = second;
       second = next;
    }
    return 0;
}
        
        
