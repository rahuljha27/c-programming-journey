#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
return 0;
}
void salting(char password[]){
    char salt[] = "2327";
    char Newpassword[100];
    strcpy(Newpassword, password);
    strcat(Newpassword,salt);
    puts(Newpassword);
}
