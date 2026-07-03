#include<stdio.h>
int main(){
    int a;
    char ch;
    printf("enter digit");
    scanf("%d",& a);
    printf("enter character");
    scanf("%c",& ch);
    if(a>=0 && a<=9){
        printf("it is a digit");
    }
    else if (ch>='A'&& ch<='Z'){
        printf("it is a character (upper case)");
    }
    else {
        printf("not valid");
    }
    return 0;
}
