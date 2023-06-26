//Lecture 2 How to Divide and Get Quotient and Remainder
#include <stdio.h>
int main(){
    int divisor,dividend,quotient,remainder;
    printf("Enter Dividend :");
    scanf("%d",&dividend);
    printf("Enter Divisor :");
    scanf("%d",&divisor);
    
    //dividend = divisor*quotient+remainder;
    quotient = dividend/divisor;
    remainder = dividend-(divisor*quotient);
    printf("Dividend is : %d",dividend);
    printf("\nDivisor is  : %d",divisor);
    printf("\nQuotient is : %d",quotient);
    printf("\nReminder is : %d",remainder);
    return 0;
}
