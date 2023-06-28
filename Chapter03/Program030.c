//Program 30 

#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int a = 4;
    for(int i=1;i<=n;i++){ 
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}
