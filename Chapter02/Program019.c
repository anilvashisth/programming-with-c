//Program 19 The Number is Divisible by 5 and 3
# include<stdio.h>
int main(){
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);

    if(num%5==0 && num%3==0){
        printf("The number is Divisible by 5 and 3");
    }
    else{
        printf("Not divisible by 5 and 3");
    }

    return 0;
}
