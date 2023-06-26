//Lecture 4 WAP to find out Simple Interest amount provided by user
#include <stdio.h>

int main(){
    float principal,time,rate,si;
    printf("Enter Value of Principal :");
    scanf("%f", &principal);
    printf("\n Enter Time :");
    scanf("%f", &time);
    printf("\n Enter Rate :");
    scanf("%f", &rate);

    si = (principal * time * rate) / 100;
    printf("\nThe value of Si is Rs: %f", si);
    
    return 0;
}
