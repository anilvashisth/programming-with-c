//Lecture 8.1 Volume, LSA, and TSA of Sphere
#include<stdio.h>
int main(){
    float radius,volumnofsphere,pi=3.14,lsa,tsa;
    printf("The radius of sphere:");
    scanf("%f",&radius);
    volumnofsphere=(4*pi*radius*radius*radius)/3;
    lsa=4*pi*radius*radius;
    tsa=4*pi*radius*radius;
    printf("The Volumn of Sphere: %f",volumnofsphere);
    printf("\nThe Lateral Surface Area of Sphere: %f",lsa);
    printf("\nThe Total Surface Area of Sphere: %f",tsa);

    return 0;
}
