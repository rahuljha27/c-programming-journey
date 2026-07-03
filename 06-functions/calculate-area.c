#include<stdio.h>
#include <math.h>
float squarearea(float side);
float rectanglearea(float a , float b);
float circlearea(float radius);
int main(){
    float a = 4.0;
    float b =5.0;
    printf("area is %f\n", rectanglearea(a,b));
    float side = 15.0;
    printf("area is %f\n" , squarearea(side));
    float radius = 2.0;
    printf("area is %f\n", circlearea(radius));
return 0;
}

float squarearea(float side){
    return side * side ;
}
float rectanglearea(float a, float b){
    return a *b ;
}
float circlearea(float radius){
    return 3.14 * radius * radius;
}
