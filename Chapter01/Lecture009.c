/*Lecture 9 Find out Volume, LSA and TSA of Cylinder. */
//Volume of Cylinder = pi*r*r*h
//LSA of Cylinder = 2*pi*r*h 
//TSA of Cylinder = 2*pi*r(r+h)
#include<stdio.h>

int main(){
    int radius,Height,pi=3.14,VolumeofCylinder,LSAofCylinder,TSAofCylinder;
    printf("Enter the Radius of Cylinder :");
    scanf("%d",&radius);
    printf("Enter the Height of Cylinder :");
    scanf("%d",&Height);

    VolumeofCylinder = pi*radius*radius*Height;
    LSAofCylinder = 2*pi*radius*Height;
    TSAofCylinder = 2*pi*radius*(radius+Height);

    printf("Volume of Cylinder :%d ",VolumeofCylinder);
    printf("\nLateral Surface Area of Cylinder :%d ",LSAofCylinder);
    printf("\nTotal Surface Area of Cylinder :%d ",TSAofCylinder);

    return 0;
}
