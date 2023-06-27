/*Lecture 10 Cone,Conic etc. 
Volume(V) = ⅓ πrrh cubic units
The total surface area of the cone = πrl + πr2
or 
Area = πr(l + r)
Slant Height, l = √(r2+h2)
*/
#include<stdio.h>

int main(){
    float pi=3.14,Radius,Height,SlantHeight,Volumeofcone;
    printf("Enter the Radius of Cone : ");
    scanf("%f",&Radius);
    printf("Enter the Height of Cone : ");
    scanf("%f",&Height);
    Volumeofcone= (pi*Radius*Radius*Height)/3;
    printf("The Volume of Cone is %f:",Volumeofcone);
    return 0;
}
