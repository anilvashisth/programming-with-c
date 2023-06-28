//Program 21 Grade, with Marks obtained by any student
#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks less than equal to 100 :");
    scanf("%d",&marks);
    if (marks>100){
        printf("Aadi/Manav you are so smart,");
        printf("\nEk Thappad me dimag dhikane aa jayega");
    }
    else if(marks>=80 && marks<=100){
        printf("Grade A");
    }
    else if (marks>=60 && marks<=100 ){
        printf("Grade B");
    }
    else if (marks>=40 && marks<=100 ){
        printf("Grade C");
    }
    else if (marks>=1 && marks<40 ){
        printf("Grade D");
    }

    return 0;
}
