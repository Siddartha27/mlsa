# include<stdio.h>

int main(){
    int i=1,n,c=0;
    printf("enter the number to be checked:");
    scanf("%d",&n);
    do{
        if(n%i==0){
            c++;
        }
        i++;
    }while(i<=n);
    if(c==2){
            printf("the number %d is prime",n);

        }
        else{
            printf("the number  %d is not prime",n);
            
        }

    return 0;
}