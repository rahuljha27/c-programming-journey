#include<stdio.h>
void primevalue(int n);
int main(){
    int n;
    printf("enter number");
    scanf("%d", & n);
    primevalue(n);
    return 0;
}
void primevalue(int n){
int a =1;
if(n<=1){
    a =0;
}
    else{
        for(int i = 2; i*i<=n; i++){
            if(n % i == 0){
                a = 0;
                break;
            }
        }
    }
    if( a=1){
        printf("%d is prime number");
    }
    else{
        printf("%d is not prime number");
    }
}

