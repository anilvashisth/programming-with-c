//Lecture 33
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no : ");
    scanf("%d",&n);
    int a = 3;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}
