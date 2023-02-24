# include<stdio.h>

int main(){
    int n;
    printf("Enter how many numbers you want to print : \n");
    scanf("%d",&n);
    printf("The first %d natural numbers are \n",n);
    for ( int i=1;i<=n;i++){
        printf("%d \n",i);
        
 }
    return 0;
}