//Lecture 5 Arithmatic operation of float datatype
#include<stdio.h>
int main()
{
    float a,b,Sum,Diff,Multiply,Div;
    printf("Enter First No :");
    scanf("%f",&a);
    printf("Enter 2nd No:");
    scanf("%f",&b);
    Sum =a+b;
    Diff=a-b;
    Multiply=a*b;
    Div=a/b;
    printf("The Sum of two float no: %f",Sum);
    printf("\nThe Diff of two float no: %f",Diff);
    printf("\nThe Multiply of two float no: %f",Multiply);
    printf("\nThe Division of two float no: %f",Div);

    return 0;
}
