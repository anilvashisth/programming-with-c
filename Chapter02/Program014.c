//Lecture 14 Divisible by 15
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if(n%15==0){
        printf("Divisible by 15");
    }
    else{
        printf("Not Divisible by 15");
    }
    return 0;
}
