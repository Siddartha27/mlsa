# include<stdio.h>

int main(){
    int i=1,s=0;
    while(i<=10){
        s=s+i;
        i++;

    }
    printf("The sum of first 10 natural numbers using while loop is %d",s);

    return 0;
}