// Lecture 11.2 Discount on Spl Purchase
#include<stdio.h>

int main(){
    int qty,dis=0;
    float rate,tot;

    printf("Enter Qty:");
    scanf("%d",&qty);
    printf("Enter Rate :");
    scanf("%f",&rate);


    if (qty>1000)
        dis=10;
    tot=(qty*rate)-(qty*rate*dis/100);
        //print("Enjoy the shopping");
    //else
    printf("Total Expence after Discount : %f",tot);

    return 0;
}
