/*Lecture 9 
Cylinder,Cone,Conic etc. */
//Volume of Cylinder = pi*r*r*h
//LSA of Cylinder = 2*pi*r*h 
//TSA of Cylinder = 2*pi*r(r+h)
#include<stdio.h>

int main(){
    float radius,Height,pi=3.14,VolumeofCylinder,LSAofCylinder,TSAofCylinder;
    printf("Enter the Radius of Cylinder :");
    scanf("%f",&radius);
    printf("Enter the Height of Cylinder :");
    scanf("%f",&Height);

    VolumeofCylinder = pi*radius*radius*Height;
    LSAofCylinder = 2*pi*radius*Height;
    TSAofCylinder = 2*pi*radius*(radius+Height);

    printf("Volume of Cylinder :%f ",VolumeofCylinder);
    printf("\nLateral Surface Area of Cylinder :%f ",LSAofCylinder);
    printf("\nTotal Surface Area of Cylinder :%f ",TSAofCylinder);

    return 0;
}
