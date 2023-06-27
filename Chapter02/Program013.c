//Lecture 13.2 Divisible by 4
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%4==0){
        printf("Divisible by 4");
    }
    else{
        printf("Not Divisible by 4");
    }
    return 0;
}
