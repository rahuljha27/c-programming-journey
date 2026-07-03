#include<stdio.h>
int main(){
    int marks;
    printf("enter marks(0-100)");
    scanf("%d",&marks);
    if(marks< 30){
        printf(" grade is C");
    }
    else if(marks >=30 && marks< 70){
        printf("grade is B");
    }
    else if(marks>= 70 && marks < 90){
        printf("grade is A");
    }
    else if(marks<=90 && marks<=100){
        printf("grade is A+");
    }
    else{
        printf("No grade");
    }
    return 0;
}