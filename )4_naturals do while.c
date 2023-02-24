# include<stdio.h>

int main(){
    int i=1, n;
    printf("Enter how many natural numbers you want to print:");
    scanf("%d",&n);
    printf("The first %d natural numbers are \n",n);
    do{
        printf("%d \n",i);
        i++;

    }while(i<=n);


    return 0;
}