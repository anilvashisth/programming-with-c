//Program 29 AP (Odd Number)
#include<stdio.h>
int main(){
    int n;
    printf("Enter the No :");
    scanf("%d",&n);
    for(int i=1;i<=2*(n-1);i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}
