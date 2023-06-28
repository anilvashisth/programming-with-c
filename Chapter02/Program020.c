// Program 20 Validity of Triangle using Side of a Triangle
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st Side:");
    scanf("%d",&a);
    
    printf("Enter 2nd Side:");
    scanf("%d",&b);
    
    printf("Enter 3rd Side:");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Valid Triangle");
    }
    else{
        printf("invalid Triangle");
    }

    return 0;
}
