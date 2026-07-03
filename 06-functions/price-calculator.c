#include<stdio.h>
void calculatedprice(float value);
int main(){
float value = 100.00;
calculatedprice(value);
printf(" value is  %f\n", value);
return 0;
}
void calculatedprice(float value){
    value = value + (0.18 * value);
    printf(" final price is %f\n" , value);
}

