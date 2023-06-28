//Program 18 Take 3 number and print the greatest
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st no :");
    scanf("%d",&a);
    printf("Enter 2nd no :");
    scanf("%d",&b);
    printf("Enter 3rd no :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf( "%d A is greatest",a);
    }
    if(b>a && b>c){
        printf( "%d B is greatest",b);
    }
    if(c>a && c>b){
        printf("%d c is greatest",c);
    }

    return 0;
}
