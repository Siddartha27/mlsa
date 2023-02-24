# include<stdio.h>

int main(){
    int fact=1, i,n;
    printf("enter the number whose your factorial you want to print:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
      fact=fact*i;
      

    }
    printf("the factorial of the number is %d ",fact);
    return 0;
}