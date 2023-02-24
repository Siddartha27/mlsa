# include<stdio.h>

int main(){
    int i=1 ,s=0;
    do{
        s=s+i;
        i++;

    }while(i<=10);
    printf("The sum of first 10 natural numbers is %d",s);
    return 0;
}