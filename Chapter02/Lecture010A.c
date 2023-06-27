//Lecture 10A Reverse an integer using while loop
#include <stdio.h>

int main(){
    int n , reverse=0,reminder;
    printf("Enter a five digit no :");
    scanf("%d",&n);
    while(n!=0){
        reminder=n%10;
        reverse = reverse*10+reminder;
        n/=10;
       }
    printf("reversed no %d",reverse);

    return 0;
}