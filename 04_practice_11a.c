# include<stdio.h>

int main(){
    int i=1,c=0,n;
    printf("enter the number to be checked:");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            c++;
        }
      i++;  
    }
    if(c==2){
            printf("the number %d is prime",n);

        }
        else{
            printf("the number  %d is not prime",n);
            
        }
    return 0;
}