n// Lecture 12 Given umber is Even or Odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    if (a%2 ==0){
        printf("Even number");
    }
    else{
        printf("Odd Number");
    }
    return 0;
}
