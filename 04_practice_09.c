# include<stdio.h>

int main(){
    int fact=1,i=1 ,n;
    printf("Enter the number whose your factorial you want to print :\n");
    scanf("%d",&n);

    while(i<=n){
        fact=fact*i;
        i++;



    }
    printf("the factorial of the number %d is %d",n,fact);
    return 0;
}