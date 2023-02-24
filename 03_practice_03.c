# include<stdio.h>

int main(){
    int amount ;
    float tax=0;
    printf("Enter  income amount :");
    scanf("%d",&amount);
    if (amount>=250000 && amount<=500000)
    {
        tax=tax+0.05*(amount-250000) ;
        printf("Tax= %f",tax);

    }
    else if (amount>=500000 && amount<=1000000)
    {
        tax=tax+0.2*(amount-500000);
        printf("Tax= %f",tax);
    }
    else if (amount>1000000 )
    {
        tax=tax+0.3*(amount-1000000);
        printf("Tax= %f",tax);

    }
    else{
        printf("No tax");
    }
   


    return 0; 
}