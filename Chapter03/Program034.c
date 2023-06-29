//Program 34 Find out the Number is Prime or Composite.
#include<stdio.h>
int main(){
    int n;
    printf("Hello India, Tell me Number is Prime or composite");
    printf("\nEnter a No :");
    scanf("%d", &n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1)printf("1 is Neither Prime Nor Composite");
    else if(a==0){
            printf("Number is Prime");
        }
    else{
            printf("Number is Composite");
        }
        
    return 0;
}
