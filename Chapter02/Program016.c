// Lecture 16 Profit or Loss
//sp>cp (Profit)
//cp>sp (loss)
#include<stdio.h>
int main(){
    float cp,sp,netprofit,netloss,profitpercentage,losspercentage;
    printf("Enter Cost Price:");
    scanf("%f",&cp);
    printf("Enter Selling Price:");
    scanf("%f",&sp);
    if(sp>cp){
        printf("profit\n");
        netprofit=sp-cp;
        printf("Profit Amount is :%f ",netprofit);
        profitpercentage = (netprofit*100)/cp;
        printf("\nThe profit percentage is :%f",profitpercentage);
    }
    if(cp>sp){
        printf("loss\n");
        netloss=cp-sp;
        printf("Loss amount is :%f",netloss);
        losspercentage=(netloss*100)/cp;
        printf("\nLoss Percentage is :%f", losspercentage);
    }
    if(sp==cp)
    {
        printf("No profit, No loss");
    }

    return 0;
}
