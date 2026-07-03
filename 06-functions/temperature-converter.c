#include<stdio.h>
float converttemperature(float fahrenheit);
int main(){
    float celsius =converttemperature(97.0);
    printf(" celsius is %f ", celsius);
    return 0;
}
float converttemperature( float fahrenheit){
    float celsius = (fahrenheit - 32) * 5.0/9.0;
    return celsius;
}
